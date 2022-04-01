# cook your dish here
t=int (input())
for h in range (t):
    s=input()
    s1=''
    s2=''
    k=0
    for i in range(0,len(s)//2):
        s1+=s[i]
        s2+=s[len(s)-1-i]
    for i in s1:
        if s1.count(i)==s2.count(i):
            k+=1
    if(k==len(s1)):
        print('YES')
    else:
        print('NO')
