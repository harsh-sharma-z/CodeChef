# cook your dish here
for _ in range (int(input())):
    ind=0
    en=0
    a=list(map(int,input().split()))
    for j in (a):
        if(j==1):
            ind+=1 
        if(j==2):
            en+=1  
    if(ind>en):
        print("INDIA")
    elif(ind<en):
        print("ENGLAND")
    else:
        print("DRAW")
