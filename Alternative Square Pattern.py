# cook your dish here
n=int(input())
L=[1,2,3,4,5]

for i in range (n):
    for j in L:
        print (j,end=" ")
    for k in range (0,5):
        L[k]=L[k]+5
    L.reverse()
    print()
