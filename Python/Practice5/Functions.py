def input_list(length):    # функция заполняет список ФИО сотрудников и кодами способов оплаты
    data_table = []
    for i in range(length):
        data_table.append([] * 2)
    i = 0
    while i < length:
        print("Введите данные", i+1, "работника:")
        name = str(input("ФИО: "))
        print("Способы оплаты:")
        print("1. Постоянный оклад")
        print("2. Почасовая оплата")
        print("3. Процентная ставка")
        count = int(input("Способ оплаты: "))
        print(end='\n')
        data_table[i].insert(0, name)
        data_table[i].insert(1, count)
        i += 1
    return data_table


def change_rate(rate):    # функция изменяет базовые значения ставок
    i = int(input("Изменить базовый оклад? 1 - да; 0 - нет "))
    if i == 1:
        new_value = float(input("Введите новое значение: "))
        rate.insert(0, new_value)
    print(end='\n')
    i = int(input("Изменить почасовую ставку? 1 - да; 0 - нет "))
    if i == 1:
        new_value = float(input("Введите новое значение: "))
        rate.insert(1, new_value)
    print(end='\n')
    i = int(input("Изменить процентную ставку? 1 - да; 0 - нет "))
    if i == 1:
        new_value = float(input("Введите новое значение: "))
        rate.insert(2, new_value)
    print(end='\n')


def calculate_salary(data_table, rate):     # функция расчитывает заработную плату для каждого сотрудника
    length = len(data_table)
    salary = []
    for i in range(length):
        salary.append([] * 2)
    for i in range(length):
        salary[i].insert(0, data_table[i][0])
    for i in range(length):
        if data_table[i][1] == 1:
            salary[i].insert(1, rate[0])
        elif data_table[i][1] == 2:
            print(end='\n')
            print(data_table[i][0], ": ")
            hours = float(input("Введите количество отработанных часов: "))
            print(end='\n')
            salary[i].insert(1, rate[1]*hours)
        elif data_table[i][1] == 3:
            print(data_table[i][0], ": ")
            percent = float(input("Введите сумму, от которой необходимо посчитать процент: "))
            print(end='\n')
            salary[i].insert(1, rate[2]*percent)
        else:
            salary[i].insert(1, 0)
    return salary


