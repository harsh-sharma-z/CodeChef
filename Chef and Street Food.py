t=int(input())
for h in range (t):
    n=int(input())
    x=n
    c=0
    while x>0:
        s,p,v=map(int,input().split())
        for i in range(n):
            k=(p//(s+1))*v
            if k>c:
                c=k
        x-=1    
    print(c)
