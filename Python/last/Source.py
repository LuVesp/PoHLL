#Эта программа получает от пользователя оценку в виде числа
#и показывает буквенный уровень, соответствующий этой оценке

#Именованные константы, представляющие пороги уровней
A_SCORE = 90
B_SCORE = 80
C_SCORE = 70
D_SCORE = 60

#Получает оценку в виде числа от пользователя
score = int(input('Введите свою оценку: '))

#Определяет и выводит буквенный уровень
if score >= A_SCORE:
    print('Ваш уровень - А.')
else:
    if score >= B_SCORE:
        print('Ваш уровень - B.')
    else:
        if score >= C_SCORE:
            print('Ваш уровень - C.')
        else:
            if score >= D_SCORE:
                print('Ваш уровень - D.')
            else:
                print('Ваш уровень - F.')
