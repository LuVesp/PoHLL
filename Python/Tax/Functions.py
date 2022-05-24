def tax_calculation(key):

    if key == 1:
        tax_base = float(input("Введите кадастровую стоимость квартиры: "))
        rate = 0.003
    elif key == 2:
        tax_base = float(input("Введите кадастровую стоимость гаража: "))
        rate = 0.001
    elif key == 3:
        tax_base = float(input("Введите кадастровую стоимость участка: "))
        rate = 0.002
    elif key == 4:
        tax_base = float(input("Введите мощность автомобиля (в лошадинных силах): "))
        if tax_base <= 100:
            rate = 5.16
        elif tax_base <= 150:
            rate = 13.4
        elif tax_base <= 200:
            rate = 50
        elif tax_base <= 250:
            rate = 75
        else:
            rate = 150
    else:
        return None
    tax = tax_base * rate
    return tax
