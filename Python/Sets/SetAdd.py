
n = int(input())
s = set()

for i in range(0, n):
    country = input()
    if country not in s:
        s.add(country)

print(len(s))