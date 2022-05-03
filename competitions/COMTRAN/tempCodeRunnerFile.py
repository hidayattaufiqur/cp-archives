d1, d2, d3 = map(int, input().split())
if d3 >= d1 + d2:
    print((d1*2) + (d2*2))
elif d3 <= d1 + d2:
    print((d1) + (d3) + (d2))
elif d3 >= d1 and d3 <= d2
    print((d1*2) + (d2) + (d3) + (d1))
elif d3 <= d1 and d3 >= d2
    print((d2*2) + (d1) + (d3) + (d2))