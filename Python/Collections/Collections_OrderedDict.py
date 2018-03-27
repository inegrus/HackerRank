from collections import OrderedDict

n = int(input())

shop = OrderedDict()

item_name = ''
item_price = 0

for i in range(0, n):
    row = input().split()
    if row[1].isdigit() == False:
        item_name = '' + row[0] + ' ' + row[1]
        item_price = int(row[2])
    else:
        item_name = '' + row[0]
        item_price = int(row[1])

    if item_name not in shop:
        shop[item_name] = item_price
    else:
        shop[item_name] += item_price

for i, j in shop.items():
    print(i, j)