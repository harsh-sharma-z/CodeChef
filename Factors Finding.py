n=int(input())
c=0
L=[]

for i in range (1,n+1):
    if(n%i==0):
        c=c+1
        L.append(i)
        
print(c)
for i in (L):
    print(i,end=" ")
