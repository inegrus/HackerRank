
super_set = set(input().split())
nr = int(input())

for i in range(0, nr):
    other_set = set(input().split())
    if not other_set <= super_set:
        print(False)
        exit()

print(True)