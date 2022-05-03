def fungsi(n):
    if n % 2 == 0:
        return n // 2
    else:
        return (n-1) // 2 - n

n=int(input())
print(fungsi(n))