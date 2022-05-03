n = int(input())
x = input()
m = 0
b = 0
price = 0
for i in x:
    if i == 'M':
        m+=1
    elif i == 'B':
        b+=1

for i in x:
    if i == '?':
        if m < b:
            price += m
            m+=1
        else:
            price+=b
            b+=1
    
print(price)