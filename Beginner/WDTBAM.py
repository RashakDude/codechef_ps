for _ in range(int(input())):
    n=int(input())
    crt=input()
    chf=input()
    w=list(map(int,input().split()))
    ca=0
    wa=0
    for i in range(n):
        if crt[i]==chf[i]:
            ca+=1
        else:
            wa+=1
    if ca==0:
        print(w[0])
    elif wa==0:
        print(w[n])
    else:
        maxx=0
        for i in range(ca+1):
            if maxx<w[i]:
                maxx=w[i]
        print(maxx)