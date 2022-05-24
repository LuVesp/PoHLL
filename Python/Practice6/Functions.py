class Triangle:

    def __init__(self, a=0.0, b=0.0, c=0.0):
        self.__side_a = a
        self.__side_b = b
        self.__side_c = c
        if not (self.check()):
            self.inp()

    def __str__(self):
        return 'a = {}, b = {}, c = {}'.format(self.__side_a, self.__side_b, self.__side_c)

    def inp(self):
        while not (self.check()):
            self.__side_a = float(input("Введите длину стороны 1: "))
            self.__side_b = float(input("Введите длину стороны 2: "))
            self.__side_c = float(input("Введите длину стороны 3: "))

    def check(self):
        key = (self.__side_a < self.__side_b + self.__side_c) and \
              (self.__side_b < self.__side_a + self.__side_c) and \
              (self.__side_c < self.__side_b + self.__side_a)
        return key

    @property
    def perimeter(self):
        p = self.__side_a + self.__side_b + self.__side_c
        return p

    @property   # спасибо, поняла)
    def square(self):
        pd2 = (self.__side_a + self.__side_b + self.__side_c)/2
        s = (pd2 * (pd2 - self.__side_a) * (pd2 - self.__side_b) * (pd2 - self.__side_c)) ** 0.5
        return s

    def set_a(self, a):
        self.__side_a = a

    def set_b(self, b):
        self.__side_b = b

    def set_c(self, c):
        self.__side_c = c

    def get(self):
        return self.__side_a, self.__side_b, self.__side_c

    side_a = property(get, set_a)
    side_b = property(get, set_b)
    side_c = property(get, set_c)



