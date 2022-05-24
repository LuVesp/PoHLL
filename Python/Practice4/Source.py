from Functions import*


def main():
    # 1.1
    myInt = list()
    n = int(input("1.1 Введите количество значений, которое хотите добавить в список: "))
    input_list(myInt, n)
    print("Сумма = ", sum(myInt))
    print("Максимальный элемент: ", max(myInt))
    print("Минимальный элемент: ", min(myInt))
    myInt = sorted(myInt)
    output_list(myInt)
    print("\n")

    # 1.2
    myStr = list()
    n = int(input("1.2 Введите количество значений, которое хотите добавить в список: "))
    input_list_str(myStr, n)
    print("Максимальный элемент: ", max(myStr))
    print("Минимальный элемент: ", min(myStr))
    myStr = sorted(myStr)
    output_list(myStr)
    print("\n")

    # 2.1
    print("2.1")
    myList = list(range(-10, 11))
    output_list(myList)
    print(second(myList), "\n")

    # 2.2
    myStr2 = list()
    n = int(input("2.2 Введите количество значений, которое хотите добавить в список: "))
    input_list_str(myStr2, n)
    print(len_words(myStr2), "\n")

    # 3
    myInt2 = list()
    n = int(input("3 Введите количество значений, которое хотите добавить в список: "))
    random_list(myInt2, n)
    print(two_list(myInt2), "\n")


main()
