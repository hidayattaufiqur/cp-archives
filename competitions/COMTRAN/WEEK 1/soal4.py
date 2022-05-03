m, n = map(int, input().split())
board = m*n
banyak = 0

while True:
    if board % 2 != 0:
        banyak = (m*n-1)//2
        break
    elif board % 2 == 0:
        banyak = m*n//2
        break

print(banyak)