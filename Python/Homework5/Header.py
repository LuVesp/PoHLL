class Equation:

    def __init__(self, aa=0.0, bb=0.0, cc=0.0):
        self.__a = aa
        self.__b = bb
        self.__c = cc

    def check(self):
        return self.__a != 0

    def inp(self):
        self.__a = float(input("Введите коэффициент а: "))
        self.__b = float(input("Введите коэффициент b: "))
        self.__c = float(input("Введите коэффициент c: "))

    def __str__(self):
        return 'Уравнение: {}x^2 + {}x + {}'.format(self.__a, self.__b, self.__c)

    def a_zero_check(self):
        return self.__a == 0

    @property
    def answer(self):
        d = (self.__b ** 2) - (4 * self.__a * self.__c)
        if d < 0:
            return
        else:
            x1 = (-self.__b - d) / (2 * self.__a)
            x2 = (-self.__b + d) / (2 * self.__a)
            return x1, x2

    @property
    def a(self):
        return self.__a

    @a.setter
    def a(self, a):
        self.__a = a

    @property
    def b(self):
        return self.__b

    @b.setter
    def b(self, b):
        self.__b = b

    @property
    def c(self):
        return self.__c

    @c.setter
    def c(self, c):
        self.__c = c
