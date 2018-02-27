from collections import Counter

k = input()
all_elem = Counter(map(int, input().split()))

for i in all_elem.elements():
    if all_elem[i] == 1:
        print(i)
