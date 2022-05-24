from Header import *


def main():
    a = Ball(3)
    b = Ball()
    b.inp()
    print(a)
    print(b)
    print("Объём шара = ", a.volume())

    c = Detail(4, 'сталь', 7850)
    d = Detail()
    d.inp_det()
    print(c)
    print(d)
    print("Объём детали d = ", d.volume())
    print("Объём детали c = ", c.volume())
    print("Масса детали c = ", c.mass())
    print("Детали равны? ", c == d)


main()
