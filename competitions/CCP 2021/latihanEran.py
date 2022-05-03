n = int(input())
s = set(map(int, input().split()))
b = -1
i = 0
for j in s:
    if len(s) >= 3: 
        if i == 2: 
            b = j
    if i == 1: a = j
    i+=1

if a == b or b == -1: print("sasageo")
else: print(b)