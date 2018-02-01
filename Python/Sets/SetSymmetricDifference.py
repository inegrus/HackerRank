
nEng = int(input())
nEng = set(input().split(" "))


nFre = int(input())
nFre = set(input().split(" "))

#result = nEng.union(nFre).difference(nEng.intersection(nFre))

result = nEng.symmetric_difference(nFre)
print(len(result))