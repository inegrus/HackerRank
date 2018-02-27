
n, m = [int(x) for x in input().split()]

elements = list(map(int, input().split()))

happines = 0

A = set(map(int, input().split()))
B = set(map(int, input().split()))

for i in elements:
    if i in A:
        happines += 1
    elif i in B:
        happines -= 1

print(happines)