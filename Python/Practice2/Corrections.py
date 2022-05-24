#Здесь только те задания, где были допущены ошибки
#bool интерпретируется как Fals при значении = 0 и как True при всех остальных.

#2.1
print("2.1")
x = int(input("Введите координату x: "))
y = int(input("Введите координату y: "))
c = 0 <= y and ((x**2)+(y**2) <= 9)
print(c, end="\n\n")


#2.2
print("2.2")
x = float(input("x = "))
y = float(input("y = "))
z = float(input("z = "))
c = (x % 2 == 0 or y % 2 == 0) and (x == y or x == z or y == z)
print(c, end="\n\n")


#4.1
print("4.1")
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