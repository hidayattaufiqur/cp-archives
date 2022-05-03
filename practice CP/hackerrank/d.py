n = int(input())
# p = int(input())
for i in range(n):
    x, y, p = input().split()
    result = float(x)+float(y)
    str(result)
    if result[p] >= 5:
        print(3)
    print(round(result, int(p)))


