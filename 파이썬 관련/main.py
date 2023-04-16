import openai
import kivy
kivy.require('2.1.0') # replace with your current kivy version !

from kivy.app import App
from kivy.uix.label import Label
from kivy.uix.gridlayout import GridLayout
from kivy.uix.textinput import TextInput
from kivy.uix.button import Button

fontName = 'NanumGaRamYeonGgoc.ttf'

class interactivateStory(GridLayout):
    def __init__(self, **kwargs):
        super(interactivateStory, self).__init__(**kwargs)

        self.cols = 1

        self.inside = GridLayout()
        self.inside.cols = 4

        self.inside.add_widget(Label(text = '로그라인 : ', font_name=fontName, font_size=50))
        self.logline = TextInput(multiline=False, font_name=fontName, font_size=20)
        self.inside.add_widget(self.logline)

        self.inside.add_widget(Label(text='주제 : ', font_name=fontName, font_size=50))
        self.plot = TextInput(multiline=False, font_name=fontName, font_size=20)
        self.inside.add_widget(self.plot)

        self.inside.add_widget(Label(text='등장인물 : ', font_name=fontName, font_size=50))
        self.character = TextInput(multiline=False, font_name=fontName, font_size=20)
        self.inside.add_widget(self.character)

        self.inside.add_widget(Label(text='창의성(0.2~0.9) : ', font_name=fontName, font_size=50))
        self.temperature = TextInput(multiline=False, font_name=fontName, font_size=20)
        self.inside.add_widget(self.temperature)

        self.add_widget(self.inside)

        self.submit = Button(text='이야기 만들기', font_name=fontName, font_size=50)
        self.submit.bind(on_press=self.pressed)
        self.add_widget(self.submit)


    def pressed(self, instance):
        logline = self.logline.text
        plot = self.plot.text
        character = self.character.text
        temperature = self.temperature.text
        openai.api_key = "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"
        # os.environ['OPENAI_API_KEY'] = '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'


        prompt = f"로그라인: {logline}\n주제: {plot}\n등장인물: {character}\n\n이야기:"
        response = (openai.Completion()).create(engine="text-davinci-003", prompt=prompt, temperature=float(temperature),
                                                max_tokens=2048, top_p=1, frequency_penalty=0.0,
                                                presence_penalty=0.0, best_of=1, )

        story = response.choices[0].text.strip()
        print("\n생성된 이야기: \n", story)

        self.logline.text = ''
        self.plot.text = ''

class MyApp(App):
    def build(self):
        return interactivateStory()

if __name__ == '__main__':
    MyApp().run()


