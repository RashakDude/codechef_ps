t=int(input())
for i in range(t):
    n,b,m=map(int,input().split())
    x=0
    while n>0:
        if n%2==0:
            p=n//2
            x=x+(p*m)
            n=n-p
        else:
            p=(n+1)//2
            x=x+(p*m)
            n=n-p
        m=m*2
        if n!=1:
            x+=b
    print(x)