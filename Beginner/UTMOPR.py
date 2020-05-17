for _ in range(int(input())):
    n,k=map(int,input().split())
    l=list(map(int,input().split()))
    if sum(l)%2==0 and k==1:
        print("odd")
    else:
        print("even")