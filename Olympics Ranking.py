for _ in range (int(input())):
    l=list(map(int,input().split()))
    if((l[0]+l[1]+l[2])>(l[3]+l[4]+l[5])):
        print("1")
    else:
        print("2")
