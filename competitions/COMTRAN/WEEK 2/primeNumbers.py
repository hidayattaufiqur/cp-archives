n = int(input())
a = [True]*n
list_a = []
for i in range(2, i <= (n*1/2)):
    if a[i] == True:
        list_a.append(a[i])
        for j in range(i*i, n, i):
            a[j] = False
    # for (x) in enumerate(list_a, start=1):
        # print(x)

print(list_a)



