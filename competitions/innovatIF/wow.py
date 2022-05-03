n = int(input())
s = input()
idx = s.find("WOW")
if idx != -1:
    count = 1
    # for i in s[:idx]:
    #     if i == 'W':
    #         count+=1
    # for i in s[idx+3:]:
    #     if i == 'W':
    #         count+=1
    for i in range(idx+3, len(s)):
        if s[i] == 'W':
            count+=1
else:
    count = 0
print(count)