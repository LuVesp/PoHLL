class Ball:
    def __init__(self, radius=0):
        self.__radius = radius

    def __str__(self):
        return 'Шар: радиус {}'.format(self.__radius)

    def inp(self):
        self.__radius = float(input("Введите радиус шара: "))

    def volume(self):
        return(4.0 / 3.0) * 3.14 * (self.__radius ** 2)

    @property
    def radius(self):
        return self.__radius

    @radius.setter
    def radius(self, radius):
        self.__radius = radius


class Detail(Ball):
    def __init__(self, radius=0, material='', density=0):
        super().__init__(radius)
        self.__material = material
        self.__density = density

    def __str__(self):
        return 'Деталь: материал = {}, плотность = {}, {}'.format(self.__material, self.__density, super().__str__())

    def inp_det(self):
        super().inp()
        self.__material = input("Введите название материала детали: ")
        self.__density = float(input("Введите плотность детали: "))

    def mass(self):
        return self.volume() / self.__density

    @property
    def material(self):
        return self.__material

    @material.setter
    def material(self, material):
        self.__material = material

    @property
    def density(self):
        return self.__density

    @density.setter
    def density(self, density):
        self.__density = density

    def __eq__(self, other):
        return self.__density == other.__density and self.radius == other.radius

