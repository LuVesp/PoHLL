def input_list(name, n):    # Вводит n значений типа int в список name str
    for i in range(n):
        item = int(input("Введите элемент: ", ))
        name.insert(i, item)


def output_list(name):  # Вываодит на эеран элементы списка name
    print("Это список: ")
    for item in name:
        print(item)


def input_list_str(name, n):    # Вводит n значений типа str в список name
    for i in range(n):
        item = str(input("Введите элемент: ", ))
        name.insert(i, item)


def second(name):   # Считает количество положительных и отрицательных элементов name
    positive = 0    # счётчик положительных элементов
    negative = 0    # счётчик отрицательных элементов
    for i in range(len(name)):
        if name[i] > 0:
            positive += 1
        elif name[i] != 0:  # исключая 0 так как 0 не является положительным или отрицательным числом
            negative += 1
    return positive, negative


def len_words(name):    # считает длину каждого слова в списке name и возвращает список результатов answer
    answer = list()
    for i in range(len(name)):
        answer.insert(i, len(name[i]))
    return answer


def random_list(name, n):   # заполняет список name случайными значениями от -30 до 30
    import random
    for i in range(n):
        name.insert(i, random.randrange(-30, 31))


def two_list(name):     # из списка name получает 2 новых списка
    positive = list()   # список для положительных значений
    negative = list()   # список для отрицательных значений
    p = 0               # счётчик индексов для списка положительных значений
    n = 0               # счётчик индексов для списка отрицательных значений
    for i in range(len(name)):
        if name[i] > 0:
            positive.insert(p, name[i])
            p += 1
        elif name[i] != 0:  # исключая 0 так как 0 не является положительным или отрицательным числом
            negative.insert(n, name[i])
            n += 1
    return positive, negative
