k = int(input())
for i in range(k):
    check = False
    n = int(input())
    for j in range(2, n):
        if ((j*(j+1))//2) == n:
            check = True
            print("sempoerna")
            break
        if check:
            break
    if not check:
        print("silap")
#3, 6, 10, 15, 21, 28, 36, 45, 55
