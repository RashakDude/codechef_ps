x=int(input())
for _ in range(x):
    final =[]
    a,b=map(int,input().split())
    for i in range(a):
        arr=list(map(int,input().split()))
        if arr[2]<=b:
            c=int(arr[0])*int(arr[1])
        else:
            c=0
        final.append(c)
    final.sort()
    if final[a-1]==0:
        print("no tablet")
    else:
        print(final[a-1])