for _ in range(int(input())):
    n,m,k=map(int,input().split())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    c=e=0
    for j in range(1,n+1):
        if j in a and j in b:
            c+=1
        elif j not in a and j not in b:
            e+=1
    print(c,e)