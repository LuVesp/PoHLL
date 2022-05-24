from Functions import*


def main():

    a = Circle(3, 'зелёный')
    b = Circle()
    b.inp()
    print(a)
    print(b)
    a.radius = 4
    print(a.radius)
    print(a)
    print("Площадь a = ", a.area())

    c = Sector(4, 'оранжевый', 450)
    d = Sector()
    d.inp_sector()
    print(c)
    print(d)
    c.radius = 5
    print(c.radius)
    print(c)
    print("Площадь d = ", d.area())
    print("Площадь сектора d = ", d.area_sector())
    print("Сектора равны? ", c == d)


main()
