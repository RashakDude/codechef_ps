t=int(input())
for i in range(t):
    n=int(input())
    l=list(map(int,input().split()))
    r=list(map(int,input().split()))
    d=[]
    for i in range(len(l)):
        lr=l[i]*r[i]
        d.append(lr)
    
    if d.count(max(d))==1:
        print(d.index(max(d))+1)
    else:
        print(r.index(max(r))+1)