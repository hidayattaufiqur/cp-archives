t = int(input())
problems = 0

def fpb(a,b):
    if (b==0):
        return a
    else:
        return fpb(b, a % b)

def kpk(a,b):
    return a*b//fpb(a,b)


for i in range(0,t):
    n, a, b, k = map(int, input().split())
    appy = n//a - n//kpk(a,b)
    chef = n//b - n//kpk(a,b)
    problems = appy + chef

    if problems >= k:
        print("Win")
        print(problems)

    else:
        print("Lose")
