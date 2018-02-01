
n = int(input())
ourSet = set(map(int, input().split()))

nrOpp = int(input())
s = 0

for i in range(0, nrOpp):
    opp = list(map(str, input().split()))
    if opp[0] == 'pop':
        ourSet.pop()
    elif opp[0] == 'remove':
        ourSet.remove(int(opp[1]))
    else:
        ourSet.discard(int(opp[1]))

print(sum(ourSet))