from Functions import*

def main():
    rate = []   # список базовых ставок
    rate.insert(0, 8000)    # базовый оклад
    rate.insert(1, 150)    # почасовая ставка
    rate.insert(2, 0.3)    # процентная ставка
    data_table = []    # список работников и способов оплаты им
    salary = []    # список зарплат
    menu = -1
    while menu != 0:
        print("Меню:")
        print("1. Создать список сотрудников")
        print("2. Расчитать заработную плату")
        print("3. Изменить базовые значения ставок")
        print("0. Завершить работу")
        print(end='\n')
        menu = int(input("Выбирите пункт меню: "))
        print(end='\n')
        if menu == 1:
            length = int(input("Введите количество сотрудников: "))
            print(end='\n')
            for i in range(length):    # задаём двумерный список
                data_table.append([] * 2)
                salary.append([] * 2)
            data_table = input_list(length)    # сделано присваивание а не изменение исходного списка с целью замены новыми данными списков старых
        elif menu == 2:
            i = int(input("Изменить базовые данные? 1 - да; 0 - нет "))
            print(end='\n')
            if i == 1:
                change_rate(rate)
            salary = calculate_salary(data_table, rate)
            print(salary)
        elif menu == 3:
            change_rate(rate)


main()


