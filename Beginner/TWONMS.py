x=int(input())
for _ in range(x):
    (a,b,c)=map(int,input().split())
    if int(c%2)==0:
        if a>b:
            print(int(a/b))
        else:
            print(int(b/a))
    else:
        a*=2
        if a>b:
            print(int(a/b))
        else:
            print(int(b/a))