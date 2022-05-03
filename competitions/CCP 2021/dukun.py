t = int(input())
list = []
for i in range(t):
    n = input()
    list.append(n)

for i in range(len(list)):
    if '0' in list[i]:
        print("Beruntung")
    elif '5' in list[i]:
        print("Beruntung")
    else:
        print("Tidak Beruntung")

