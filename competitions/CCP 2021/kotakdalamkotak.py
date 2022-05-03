import math
n = int(input())    
i = 1
least = 1e9
if math.sqrt(n)**2 == n:
    a = math.sqrt(n)
    b = math.sqrt(n)
else:
    while i <= math.sqrt(n):
        if (n % i == 0) :
            if (n // i == i) :
                a = i
                b = n//i
                # print(i)
                # list.append(i)
                # list.append(i//n)
            else:
                # print(i , n//i)
                # list.append(i)
                # list.append(n//i)
                if min(abs(i-n//i), least) < least:
                    a = i
                    b = n//i
                    least =  min(abs(i-n//i), least)
        i = i + 1
print(int(a), int(b))
# for i in range(len(list)):
#     if min(abs(list[i+1]-list[i]), least):
#         a = i 
#         b = i+1
#         least = min(abs(list[i]-list[i+1]))

# print(a, b)
    

