for _ in range(int(input())):
    num=int(input())
    count=0
    while num>0:
        num//=5
        count+=num
    print(count)
