# Вариант 17
# Имеется объем V жидкости в цистерне, которую нужно разлить в бочки объемом Vб литров,
# канистры объемом Vк литров, меньше чем Vб, и баллоны объемом Vл<Vк.
# Какое наименьшее количество емкостей и каких потребуется?
V = int(input("Введите объём жидкости в цистерне: "))
Vb = int(input("Введите объём бочки: "))
Vk = int(input("Введите объём канистры: "))
Vl = int(input("Введите объём баллона: "))
Kb = V//Vb
V = V % Vb
Kk = V//Vk
V = V % Vk
Kl = V//Vl
V = V % Vl
if V > 0:
    Kl += 1
Sum = Kb + Kk + Kl
print("Наименьшее количество ёмкостей:", Sum)
print("Из них:")
print("Бочек:", Kb)
print("Канистр:", Kk)
print("Баллонов:", Kl)




