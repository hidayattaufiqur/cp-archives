from math import factorial
t = int(input())
n = int(input())
# for i in range(t):
#     print()
n+=1
n-=t
for i in range(n):
    for j in range(n-i+1):
        print(end=" ")
    for j in range(i+1):
        print(factorial(i)//(factorial(j)*factorial(i-j)), end=" ")
    print() 