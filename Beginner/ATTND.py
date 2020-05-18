for i in range(int(input())):
    f,l=[],[]
    x=int(input())
    for i in range(x):
        a,b=map(str,input().split())
        f.append(a)
        l.append(b)
    for i in range(x):
        if f.count(f[i])>=2:
            c=f[i]+" "+l[i]
            l.pop(i)
            l.insert(i,c)
        else:
            l.pop(i)
            l.insert(i,f[i])
    for i in range(x):
        print(l[i])