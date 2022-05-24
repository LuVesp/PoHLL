
bool(3.4)
bool(-150)
bool(0)
bool(' ')
bool('')
a = input('Введите что угодно: ')
if a:
    print('Ok')

age = int(input("Введите возраст: "))
if 11 <= age <= 15:
    print('Yes')
else:
    print('No')
a = "строка"
b = "число"
c = a > b
print(c)
c = len(a) > len(b)
print(c, end="\n\n")

x = int(input("Введите координату x: "))
y = int(input("Введите координату y: "))
c = 0 <= y and ((x**2)+(y**2) <= 9)
print(c, end="\n\n")

x = float(input("x = "))
y = float(input("y = "))
z = float(input("z = "))
c = (x % 2 == 0 or y % 2 == 0) and (x == y or x == z or y == z)
print(c, end="\n\n")

x = float(input("x = "))
c = -1 <= x <= 1 or 2 <= x <= 5
print(c, end="\n\n")

x = int(input("Введите координату x: "))
y = int(input("Введите координату y: "))
c = x < 0 or x > 1 or (0 < x < 1 and (y > 1 or y < 1))
print(c, end="\n\n")

x1 = float(input("x1 = "))
y1 = float(input("y1 = "))
x2 = float(input("x2 = "))
y2 = float(input("y2 = "))
if x2 < y1:
    print("Yes", end="\n\n")
else:
    print("No", end="\n\n")

i = 1
while i == 1:
    age = input('Ваш возраст: ')
    if age.isdigit() and int(age) >= 18:
        i = 0
        age = int(age)
    else:
        print("Данные введены неверно!")
print('Рекомендовано:', end=' ')
if 18 <= age <= 26:
    print('"Активный комплекс"', end="\n\n")
elif 26 < age <= 40:
    print('"Силовые нагрузки "', end="\n\n")
elif 40 < age < 60:
    print('"Общефизическая подготовка"', end="\n\n")
else:
    print('"Лечебная физкультура"', end="\n\n")

A_SCORE = 49
B_SCORE = 37
C_SCORE = 25
while True:
    score = input('Введите балл: ')
    if score.isdigit():
        break
score = int(score)
if score >= A_SCORE:
    print('Ваша оценка - 5.', end="\n\n")
elif score >= B_SCORE:
    print('Ваша оценка - 4.', end="\n\n")
elif score >= C_SCORE:
    print('Ваша оценка - 3.', end="\n\n")
else:
    print('Ваша оценка - 2.', end="\n\n")

a = input('Введите что угодно: ')
b = input('Введите что угодно: ')
if a.isdigit():
    a = int(a)
    try:
        b = int(b)
    except ValueError:
        try:
            b = float(b)
        except ValueError:
            a = str(a)
    print(a + b, end="\n\n")
else:
    try:
        a = float(a)
        try:
            b = int(b)
        except ValueError:
            try:
                b = float(b)
            except ValueError:
                a = str(a)
        print(a + b, end="\n\n")
    except ValueError:
        print(a + b, end="\n\n")

a = input('Введите что угодно: ')
if a.isdigit():
    print("Yes")
else:
    print("No")
