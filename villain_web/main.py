import streamlit as st
import pandas as pd

# 데이터 불러오기
ani_data = pd.read_csv('./villain_web/Ani.csv')
book_data = pd.read_csv('./villain_web/Book.csv')
mov_dra_data = pd.read_csv('./villain_web/Mov_Dra.csv')

# 줄바꿈 처리 함수
def format_text(text):
    if pd.isna(text) or text.strip() == "":  # 비어있는 값 또는 공백 처리
        return "uncertainty"
    return text.replace("\n", "<br>")  # 줄바꿈을 HTML <br> 태그로 변환

# 스타일 지정 함수
def format_label(text):
    return f'<span style="font-size:18px; color:blue; font-weight:bold;">{text}</span>'

# 캐릭터 이름 스타일 함수
def format_name(name):
    return f'<h1 style="font-size:40px; font-weight:bold; color:black;">{name}</h1>'

# Title 스타일 함수
def format_title(text):
    return f'<h3 style="font-size:20px; font-weight:bold; color:purple; font-style:italic;">&lt;{text}&gt;</h3>'

# 형광펜 효과 CSS 추가
def highlight_background(color):
    return f"background-color: {color}; padding: 15px; border-radius: 10px; margin-bottom: 20px;"

# 페이지 설정
st.set_page_config(page_title="VillainScope", layout="wide")

# **VillainScope 제목 추가**
st.markdown("""
    <div style="text-align: center; margin-bottom: 30px;">
        <h1 style="font-size:50px; font-weight:bold; color:red;">
            😈 VillainScope
        </h1>
    </div>
""", unsafe_allow_html=True)

st.audio("./villain_web/villain.mp3", format="audio/mp3")

# **기본 이미지 크기 초기화**
img_width = 300  # 기본값 설정

# **검색어 입력 필드**
search_query = st.text_input("검색어를 입력하세요 (이름 또는 작품명):").strip().lower()

# 데이터 필터링 함수
def filter_data(data, query):
    if query:
        return data[
            data['Name'].str.lower().str.contains(query, na=False) |
            data['Title'].str.lower().str.contains(query, na=False)
        ]
    return data

# 공통 템플릿 (이미지 오른쪽에 텍스트 배치)
def display_character(row, img_width):
    st.markdown(f"""
    <div style="{highlight_background('#FFFAE6')}">
        <div style="display: flex; align-items: center;">
            <div>
                <img src="{row['Image']}" alt="{row['Name']}" width="{img_width}">
            </div>
            <div style="margin-left: 20px;">
                {format_name(row['Name'])}
                {format_title(row['Title'])}
                <p>{format_label('Appearance')}: {format_text(row['Appearance(외관)'])}</p>
                <p>{format_label('Personality')}: {format_text(row['Personality(개성)'])}</p>
                <p>{format_label('Ability')}: {format_text(row['Ability(능력)'])}</p>
                <p>{format_label('Age')}: {format_text(row['Age'])}</p>
                <p>{format_label('Occupation')}: {format_text(row['Occupation(직업)'])}</p>
            </div>
        </div>
    </div>
    """, unsafe_allow_html=True)

    # 별점 평가와 평가 결과를 한 줄로 배치
    col1, col2 = st.columns([3, 2])
    with col1:
        st.markdown(f"""
        <div style="text-align: left; font-size:20px; font-weight:bold; margin-top: 20px;">
            '{row['Name']}'을(를) 평가해주세요!
        </div>
        """, unsafe_allow_html=True)
    with col2:
        rating = st.slider("", min_value=1, max_value=5, value=3, key=row['Name'])
        st.markdown(f"<div style='text-align: left; font-size:16px;'>⭐ {rating}점</div>", unsafe_allow_html=True)

# 탭 설정
tabs = st.tabs(["Animation", "Book", "Movie & Drama"])

# 애니메이션 탭
with tabs[0]:
    st.header("Villain in Animation")
    st.write("It's a variety of villains that show in the animation.")
    filtered_ani_data = filter_data(ani_data, search_query)
    for _, row in filtered_ani_data.iterrows():
        display_character(row, img_width)

# 책 탭
with tabs[1]:
    st.header("Villain in Book")
    st.write("It's a variety of villains that show in the book.")
    filtered_book_data = filter_data(book_data, search_query)
    for _, row in filtered_book_data.iterrows():
        display_character(row, img_width)

# 영화 + 드라마 탭
with tabs[2]:
    st.header("Villain in Movie & Drama")
    st.write("It's a variety of villains that show in the movie and drama.")
    filtered_mov_dra_data = filter_data(mov_dra_data, search_query)
    for _, row in filtered_mov_dra_data.iterrows():
        display_character(row, img_width)

# **이미지 크기 조정 슬라이더 (페이지 맨 아래로 이동)**
st.markdown("---")
img_width = st.slider("이미지 크기를 선택하세요 (픽셀 단위)", min_value=100, max_value=600, value=img_width)
