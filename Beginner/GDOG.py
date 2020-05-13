x=int(input())
for _ in range(x):
    (a,b)=map(int,input().split())
    arr=[]
    for i in range(2,b+1):
        arr.append(int(a%i))
    arr.sort()
    print(arr[b-2])
