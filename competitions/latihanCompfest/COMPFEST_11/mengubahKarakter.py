n, m = map(int, input().split())
s = input()

for i in range(0, m):
    a, b = input().split()
    # for j in range(0, len(s)):
    if s[i] == a:    
        s = s.replace(s[i], b)
            # print(s[i], i)

    # for j in range(0, )


print(s, len(s))