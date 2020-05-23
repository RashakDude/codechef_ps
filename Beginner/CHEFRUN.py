for _ in range(int(input())):
    a=list(map(int,input().split()))
    x1=a[0]
    x2=a[1]
    x3=a[2]
    v1=a[3]
    v2=a[4]
    if((abs(x3-x1)/v1)>abs(x3-x2)/v2):
        print("Kefa")
    elif((abs(x3-x1)/v1)<abs(x3-x2)/v2):
        print("Chef")
    else:
        print("Draw")