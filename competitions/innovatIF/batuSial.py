n, q = map(int, input().split())
lstQ = []
# for _ in range(n):
lstQ = list(map(int, input().split()))
total = sum(lstQ)
for _ in range(q):
    a, b = map(int, input().split())
    print(total - sum(lstQ[a-1:b]))