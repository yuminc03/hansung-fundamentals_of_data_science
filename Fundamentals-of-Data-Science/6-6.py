# 6-6: 선택형 터틀 동작
from turtle import *
shape('turtle')
bgcolor('black')

# 사용자로부터 입력: 1, 2, 그 외 숫자들
print('>> 1. 삼각형, 2. 사각형, 그 외 숫자는 종료')
command = int(input('번호 선택: '))

if command == 1:
    color('yellow')
    fd(200)
    lt(120)

    fd(200)
    lt(120)

    fd(200)
    lt(120)
elif command == 2:
    color('#ff0000')
    fd(200)
    rt(90)

    fd(200)
    rt(90)

    fd(200)
    rt(90)

    fd(200)
    rt(90)
else:
    print('프로그램을 종료합니다.')
    exit()
