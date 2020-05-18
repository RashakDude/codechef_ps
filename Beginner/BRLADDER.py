for _ in range(int(input())):
    a,b=map(int,input().split())
    if(abs(a-b)==2):
        print('YES')
    elif(a%2):
        if(b==a+1):
            print('YES')
        else:
            print('NO')
    elif(b%2):
        if(a==b+1):
            print('YES')
        else:
            print('NO')
    else:
        print('NO')