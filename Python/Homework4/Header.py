# Я рассматривала вариант со средним арифметическим точек. Однако он даёт погрешность в координатах центра
# соответственно расстаяний от него. Поэтому я вычисляю расстаяния между всеми точками друг с другом и
# выбираю максимальное - диаметр окружности


def fence(trees, interval, tree):
    distance = []
    k = 0
    i = 0
    while i < trees - 1:
        j = i + 1
        while j < trees:
            distance.insert(k, ((tree[j][0] - tree[i][0])**2 + (tree[j][1] - tree[i][1])**2)**0.5)
            k += 1
            j += 1
        i += 1
    try:
        radius = max(distance)/2 + interval     # Использовала max
    except ValueError:
        radius = interval
    length = 2 * 3.14 * radius
    square = 5 * length
    return radius, square


def cucumbers(shorties, table):
    i = 0
    maximum = table[0][1]
    j = 0
    sum_cuc = 0
    while i < shorties:
        sum_cuc = sum_cuc + table[i][1]  # Не придумала как использовать sum с двумерным списком
        if table[i][1] > maximum:   # не использую метод max так как нужно получить не значение, а индекс
            maximum = table[i][1]
            j = i
        i += 1
    sum_cuc_min = sum_cuc - shorties*2 - 1
    return sum_cuc, sum_cuc_min, table[j][0]
