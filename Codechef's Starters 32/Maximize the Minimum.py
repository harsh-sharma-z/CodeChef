# cook your dish here
test=int(input())
while(test):
    test-=1 
    n,k=map(int,input().split())
    lst=[int(a) for a in input().split()]
    lst.sort()
    ans=min(k,n-1)
    print(lst[ans])
