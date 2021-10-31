for _ in range (int(input())):
    a,b=map(int,input().split())
    c=0
    while (a!=b):
        if(a<b):
            a+=2
            c+=1
        if(a>b):
            a-=1
            c+=1
    print(c)
