# Суперкласс
class Circle:
    def __init__(self, radius=0.0, color="какой-то цвет"):
        self.__radius = radius  # Радиус
        self.__color = color    # Цвет

    @property
    def radius(self):
        return self.__radius

    @radius.setter
    def radius(self, radius):
        self.__radius = radius

    @property
    def color(self):
        return self.__color

    @color.setter
    def color(self, color):
        self.__color = color

    def __str__(self):
        return 'Круг: радиус = {}, цвет = {}'.format(self.__radius, self.__color)

    def inp(self):
        self.__radius = float(input("Введите значение радиуса: "))
        self.__color = input('Введите цвет круга: ')

    def area(self):
        return 3.14 * self.__radius ** 2


# Дочерний класс


class Sector(Circle):

    def __init__(self, radius=0.0, color="", angle=0.0):
        super().__init__(radius, color)
        self.__angle = angle % 360

    def __str__(self):
        return 'Сектор: угол = {}, {}'.format(self.__angle, super().__str__())

    def inp_sector(self):
        super().inp()
        self.__angle = float(input("Введите значение угла: "))
        self.__angle = self.__angle % 360

    def area_sector(self):
        radian = self.__angle / 180 * 3.14
        area = (radian * self.radius ** 2) / 2
        return area

    def __eq__(self, other):
        return self.__angle == other.__angle and self.radius == other.radius

    @property
    def angle(self):
        return self.__angle

    @angle.setter
    def angle(self, angle):
        self.__angle = angle

