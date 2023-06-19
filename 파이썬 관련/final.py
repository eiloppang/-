import csv
import pandas as pd
import torch
import torch.nn as nn
from sklearn.model_selection import train_test_split
import plotly.express as px
import dash
import dash_core_components as dcc
import dash_html_components as html

class LoLWinRatePredictor(nn.Module):
    def __init__(self):
        super(LoLWinRatePredictor, self).__init__()
        self.fc = nn.Linear(5, 1)

    def forward(self, x):
        out = self.fc(x)
        return out

def load_csv_file(filename):
    with open(filename, mode='r', encoding='utf-8-sig') as file:
        reader = csv.reader(file)
        data = {rows[0]: rows[1] for rows in reader}
    return data

def predict_win_rate(model, champion_data, win_csv):
    model.eval()
    line_win_rate = [float(win_csv[champion]) for champion in champion_data]
    line_win_rate_tensor = torch.tensor(line_win_rate).unsqueeze(0)
    result = model(line_win_rate_tensor)
    return result.item()

# 데이터셋 및 데이터로더 설정
combinationData = pd.read_csv("C:\\Users\\User\\Desktop\\lolcombination.csv", encoding='utf-8-sig')
LineWinRate = combinationData.loc[:, "TopRate":"SupRate"]
AvgWinRate = combinationData.loc[:, "Avg"]
X = LineWinRate.values
y = AvgWinRate.values

# 데이터 셋 구분 (train_test_split을 이용)
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=10)

# 모델 초기화 및 학습
model = LoLWinRatePredictor()
criterion = nn.L1Loss()
optimizer = torch.optim.Adam(model.parameters(), lr=0.001)

X_train_tensor = torch.tensor(X_train).float()
y_train_tensor = torch.tensor(y_train).float().unsqueeze(1)

num_epochs = 10
for epoch in range(num_epochs):
    model.train()
    optimizer.zero_grad()
    outputs = model(X_train_tensor)
    loss = criterion(outputs, y_train_tensor)
    loss.backward()
    optimizer.step()

# 사용자 입력에 따른 승률 예측
win_csv = load_csv_file("C:\\Users\\User\\Desktop\\winrate2.csv")

app = dash.Dash(__name__)

app.layout = html.Div(
    children=[
        html.Div(
            children=[
                html.H1("League of Legends Win Rate Predictor"),
            ],
            style={"margin-bottom": "20px", "text-align": "center"},
        ),
        html.Div(
            children=[
                html.Div(
                    children=[
                        html.Label("Top 챔피언 이름"),
                        dcc.Input(id="top-input", type="text", value=""),
                    ],
                    style={"display": "flex", "align-items": "center", "margin-bottom": "10px"},
                ),
                html.Div(
                    children=[
                        html.Label("Mid 챔피언 이름"),
                        dcc.Input(id="mid-input", type="text", value=""),
                    ],
                    style={"display": "flex", "align-items": "center", "margin-bottom": "10px"},
                ),
                html.Div(
                    children=[
                        html.Label("Jungle 챔피언 이름"),
                        dcc.Input(id="jungle-input", type="text", value=""),
                    ],
                    style={"display": "flex", "align-items": "center", "margin-bottom": "10px"},
                ),
                html.Div(
                    children=[
                        html.Label("ADC 챔피언 이름"),
                        dcc.Input(id="adc-input", type="text", value=""),
                    ],
                    style={"display": "flex", "align-items": "center", "margin-bottom": "10px"},
                ),
                html.Div(
                    children=[
                        html.Label("Support 챔피언 이름"),
                        dcc.Input(id="sup-input", type="text", value=""),
                    ],
                    style={"display": "flex", "align-items": "center", "margin-bottom": "10px"},
                ),
                html.Button("예측", id="predict-button", n_clicks=0),
            ],
            style={"display": "flex", "flex-direction": "column", "width": "300px", "align-items": "center"},
        ),
        html.Div(id="output"),
    ],
    style={"display": "flex", "flex-direction": "column", "align-items": "center"},
)


@app.callback(
    dash.dependencies.Output("output", "children"),
    [
        dash.dependencies.Input("predict-button", "n_clicks"),
    ],
    [
        dash.dependencies.State("top-input", "value"),
        dash.dependencies.State("mid-input", "value"),
        dash.dependencies.State("jungle-input", "value"),
        dash.dependencies.State("adc-input", "value"),
        dash.dependencies.State("sup-input", "value"),
    ],
)
def update_output(n_clicks, top_champion, mid_champion, jungle_champion, adc_champion, sup_champion):
    if n_clicks > 0:
        champion_data = [top_champion, mid_champion, jungle_champion, adc_champion, sup_champion]
        win_rate = predict_win_rate(model, champion_data, win_csv)
        return f"조합 예상 승률: {win_rate:.2f}%"

if __name__ == "__main__":
    app.run_server(debug=True)
