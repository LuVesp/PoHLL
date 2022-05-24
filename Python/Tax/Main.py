from Functions import*


def main():
    key = 5
    while key != 0:
        print("Меню:")
        print("1 - Квартира")
        print("2 - Гараж")
        print("3 - Земельный участнок")
        print("4 -  Автомобиль")
        print("0 - Выход")
        key = int(input("Выберите пункт меню: "))
        if key != 0:
            print("Налог: ", tax_calculation(key))
            print(end='n/')



main()
