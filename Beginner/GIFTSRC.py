n=int(input())
for i in range(n):
    a=int(input())
    b=input()
    x,y=0,0
    p=-1
    for i in b:
        if i=='L' and p!=0:
            x-=1
            p=0
        if i=='R' and p!=0:
            x+=1
            p=0
        if i=='U' and p!=1:
            y+=1
            p=1
        if i=='D' and p!=1:
            y-=1
            p=1
    print(x,y)        
            