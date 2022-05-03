s = input()
n = int(input())
lst = []
notSus = 0
check = False
for _ in range(n):
    lst.append(input())

for i in range(len(lst)):
    if len(s) == len(lst[i]):
        for j in s:
            if j not in lst[i]: 
                check = False
                break
            else: 
                check = True
                continue
        if check:
            notSus += 1

print(n - notSus)