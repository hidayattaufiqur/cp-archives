n = int(input())

for i in range(n):
    for j in range(n):
        if i == 0 or i == n:
            if j == i+1 or j == n-1:
                print("*", end=" ")
        if i == j:
            print("*",end="  ")
        if j == n-i:
            print("*", end="  ")
    print()

