
nrA = int(input())
A = set(input().split(" "))

N = int(input())

for i in range(N):
    (instr, nA2) = input().split()
    A2 = set(input().split(" "))
    if instr == 'intersection_update':
        A.intersection_update(A2)
    elif instr == 'update':
        A.update(A2)
    elif instr == 'symmetric_difference_update':
        A.symmetric_difference_update(A2)
    else:
        A.difference_update(A2)


print(sum(map(int, A)))