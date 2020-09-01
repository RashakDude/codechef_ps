for _ in range(int(input())):
    a,b=map(int,input().split())
    l=list(map(int,input().split()))
    chef=[]
    aa=[]
    flag=0
    for i in range(1,a+1):
        if i not in l:
            if(flag==0):
                chef.append(i)
                flag=1
            else:
                aa.append(i)
                flag=0
    print(*chef)
    print(*aa)