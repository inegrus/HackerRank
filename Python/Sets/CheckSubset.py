
t = int(input())

for _ in range(0, t):
    nr_a = int(input())
    set_a = set(input().split())

    nr_b = int(input())
    set_b = set(input().split())

    print(set_a <= set_b)


