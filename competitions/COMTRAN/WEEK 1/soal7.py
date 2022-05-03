list = []
a = int(input())
b = int(input())
c = int(input())

q = a+b+c
w = (a+b)*c
e = a*(b+c)
r = a*b*c

list.append(q)
list.append(w)
list.append(e)
list.append(r)

print(max(list))
