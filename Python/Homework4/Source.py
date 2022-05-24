from Header import*


def main():
    print("#1 ")
    trees = int(input("Введите количество деревьев в роще: "))
    interval = float(input("Введите расстояние от крайнего дерева до забора: "))

    # вынесла создание и заполнение списков
    tree = []
    for i in range(trees):
        tree.append([] * 2)
    i = 0
    while i < trees:
        print("Введите координаты ", i + 1, "дерева:")
        x = float(input("x = "))
        y = float(input("y = "))
        tree[i].insert(0, x)
        tree[i].insert(1, y)
        i += 1

    print("Наименьшие радиус и площадь забора соответственно ", fence(trees, interval, tree))
    print(end='\n\n')

    print("#2 ")
    shorties = int(input("Введите количество коротышек: "))

    table = []
    for i in range(shorties):
        table.append([] * 2)
    i = 0
    while i < shorties:
        print("Введите данные", i + 1, "коротышки:")
        name = str(input("Имя: "))
        count = int(input("Сколько собрал: "))
        table[i].insert(0, name)
        table[i].insert(1, count)
        i += 1

    print("Количество собранных огурцов, остаток огурцов на\
засолку и имя коротышки, получившего 3 огурца", cucumbers(shorties, table))


main()