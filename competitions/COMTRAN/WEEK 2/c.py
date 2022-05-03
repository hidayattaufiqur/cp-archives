t = int(input())

def handShakes(n):
    x = 0
    for i in range(1, n+1):
        x += n-i
    return (x)

for i in range(0,t):
    n = int(input())
    print(handShakes(n))
