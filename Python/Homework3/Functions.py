def polinom(x):
    y = 0
    i = 11
    k = 10
    while i >= 1:
        y = y + i * pow(x, k)
        k -= 1
        i -= 1
    return y


def flag(m):
    v = m
    m -= 1
    while m > 1:
        v = v * m
        m -= 1
    return v
