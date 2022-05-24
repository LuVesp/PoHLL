Hours = int(input("Введи количество отработанных часов "))
Rate = int(input("Введите ставку оплаты труда "))
if Hours > 40:
    Sum = Hours*Rate*1.5
else:
    Sum = Hours*Rate
print("К оплате ", Sum)
