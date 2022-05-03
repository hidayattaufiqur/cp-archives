l = []
name = ''
n = int(input())
h1,m1,s1= map(int,input().split(':'))
h2,m2,s2= map(int,input().split(':'))
for i in range(0,n):
   j,w =input().split(" - ")
   h,m,s = map(int,w.split(':'))
   l.append([j,h,m,s])
t2 = 3600*h2 + 60*m2 +s1
before = []
for i in l:
    ti = i[1]*3600 + i[2]*60 +i[3]
    if (ti>t2):
        name = before[0]
        break
    before = i
print(name)