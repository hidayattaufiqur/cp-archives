import math

list_z = []

def isPrime(y):
    akar = math.sqrt(y)
    akar = math.floor(akar)
    for i in range (2, akar+1):
        if y % i == 0:
            return False
    return True

# def distinctPrimes(x):
z = 30
for i in range(2,z+1): # cari faktor
    if z == 1000:
        break
    prime = 0
    if z % i == 0:
        print(i)
        check = isPrime(i)
        if check == True:
            prime += 1
            # print(f"{i} prime = {prime}")
    if prime >= 3:
        list_z.append(z)
z+=1

for j in list_zz:
    

# n = int(input())
# print(list_z)

