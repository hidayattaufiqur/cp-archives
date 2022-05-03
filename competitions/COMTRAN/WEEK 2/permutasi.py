def permutasi(n,k):
    for i in range(1,n+1):
        # p = n*i/(n-k)*n-k-1
        print(n*i)
        n-=1
    # return p

(permutasi(5,3))