def fpb(a,b):
    if (b==0):
        return a
    else:
        return fpb(b, a % b)

print(fpb(120, 480))