from collections import Counter

n = input()
shoes = Counter(list(map(int, input().split())))

x = int(input())
sum = 0
for _ in range(0, x):
    size, cost = [int(x) for x in input().split()]

    if size in shoes and shoes[size] > 0:
        shoes[size] -= 1
        sum += cost


print(sum)

