n, m = map(int, input().split())
listA = set(map(int, input().split()))
listB = set(map(int, input().split()))
cnt = 0

# listC = listA.intersection(listB)
# if n > m:
#     cnt = abs(n - len(listC))
# elif m < n:
#     cnt = abs(m - len(listC))
# else:
#     cnt = n+m
for i in listA:
    if i not in listB:
        cnt+=1
        
# print(listA)
for i in listB:
    if i not in listA:
        cnt+=1


print(cnt)
