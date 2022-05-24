def cost(price, quantity, container):
    c_cost = container * 120
    liters = quantity * 200
    if liters > 5000:
        g_cost = price * liters * 0.93 - c_cost
    elif liters > 2000:
        g_cost = price * liters * 0.95 - c_cost
    elif liters > 1000:
        g_cost = price * liters * 0.97 - c_cost
    else:
        g_cost = price * liters - c_cost
    return round(g_cost, 2)     # теперь просто возвращают


def two_value(numerator1, denominator1, numerator2, denominator2):
    try:
        if denominator1 < denominator2:
            i = denominator1
        else:
            i = denominator2
        while denominator2 % i != 0 or denominator1 % i != 0:
            i -= 1
        denominator = denominator1*denominator2/i
        numerator = numerator1*denominator2/i + numerator2*denominator1/i
        return int(numerator), int(denominator)
    except ZeroDivisionError:
        return


def four(string):
    i = len(string)
    if i > 10:
        string = string[0:10]
    elif i < 10:
        i = 10-i
        string = string + "*" * i
    return string       # теперь просто возвращают
