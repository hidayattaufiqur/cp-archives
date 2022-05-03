n = int(input())

def luckyNumbers(n):
    # if n == 1:
    #     return 2
    # elif n == 2:
    #     return 6
    # else:
    #     return (2**n + luckyNumbers(n-1) + luckyNumbers(n-2)-1)
    return (2**(n+1)) - 2

print(luckyNumbers(n))