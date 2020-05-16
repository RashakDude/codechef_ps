x=int(input())
for _ in range(x):
    (n,k)=map(int,input().split())
    arr=list(map(int,input().split()))
    for i in range(len(arr)):
        if arr[i]<=k:
            k-=arr[i]
            arr[i]=1
        else:
            arr[i]=0
    s=''.join(map(str,arr))
    print(s)