from collections import defaultdict

n, m = input().split()
n, m = [int(n), int(m)]

a = defaultdict(list)
b = defaultdict(list)

for i in range(1, n + 1):
    letter = str(input())
    a[letter].append(i)

for i in range(0, m):
    find_letter = str(input())
    if find_letter in a:
        print(*a[find_letter])
    else:
        print("-1")
