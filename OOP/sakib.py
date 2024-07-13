for n in map(int,[*open(0)][1: ]):print(*[(n-i-1)//2+1+i%2*(n//2+n%2)for i in range(n)])
