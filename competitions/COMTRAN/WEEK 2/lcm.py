def fpb(a,b):
    if (b==0):
        return a
    else:
        return fpb(b, a % b)

def kpk(a,b):
    return a*b//fpb(a,b)

print(kpk(4,6))