from Functions import*


def main():
    A = Triangle()
    B = Triangle()
    C = Triangle(3, 4, 5)
    B.inp()
    print("Треугольник А:", A)
    print("Треугольник B:", A)
    print("Треугольник C:", A)

    print("Периметр треугольника A = ", A.perimeter)
    print("Периметр треугольника B = ", B.perimeter)
    print("Периметр треугольника C = ", C.perimeter)

    print("Площадь треугольника A = ", A.square)
    print("Площадь треугольника B = ", B.square)
    print("Площадь треугольника C = ", C.square)

    list_ = [A, B, C]
    for i in range(len(list_)):
        print("Треугольник ", i+1, ": ", list_[i])


main()
