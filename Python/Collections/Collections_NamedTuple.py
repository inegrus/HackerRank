from collections import namedtuple

n = int(input())
columns = ','.join(input().split())

Student = namedtuple('Student', columns)

sum_marks = 0

for i in range(0, n):
    st = input().split()
    student = Student(*st)
    sum_marks += int(student.MARKS)

print(sum_marks/n)