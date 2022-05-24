import keyboard
# у меня работает, устанавливала модуль keyboard через командную строку командой "pip install keyboard"

from Functions import *


def main():
    print("Стоимость покупки = ", cost(50, 4, 0))
    print("Стоимость покупки = ", cost(50, 4, 2))

    print(two_value(1, 6, 1, 10))
    print(two_value(1, 0, 1, 10))
    print(two_value(1, 0, 1, 0))
    print(four('qwert'))
    print(four('qwertyuiop'))
    print(four('qwertyuiop['))

    i = 1
    print("Нажмите Esc")
    while i == 1:
        if keyboard.is_pressed('Esc'):
            print("Вы нажали <Esc>. Стандартный код этой клавиши: 27")
            i = 0
    i = 1

    print("Нажмите Enter")
    while i == 1:
        if keyboard.is_pressed('Enter'):
            print("Вы нажали <Enter>. Стандартный код этой клавиши: 13")
            i = 0


main()



