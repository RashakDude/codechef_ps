x=int(input())
for _ in range(x):
    a=int(input())
    if a==1 or a==2 or a==3:
        print(0)
    else:
        a-=2
        a=int(a/2)
        i=1
        sum=0
        for i in range(a+1):
            sum+=i
            i+=1
        print(sum)