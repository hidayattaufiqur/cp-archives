n = int(input()) 

n100 = 0
n50 = 0
n20 = 0
n10 = 0
n5 = 0
n2 = 0
n1 = 0

n100 = n // 100
n -= 100 * n100 

n50 = n // 50
n -= 50 * n50

n20 = n // 20
n -= 20 * n20

n10 = n // 10
n -= 10 * n10

n5 = n // 5
n -= 5 * n5

n2 = n // 2
n -= 2 * n2

n1 = n // 1 
n -= 1 * n1



print(n100, n50, n20, n10, n5, n2, n1)
    