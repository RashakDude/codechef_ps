# cook your dish here
x=int(input())
for _ in range(x):
    a=int(input())
    arr = list(map(int,input().split()))
    b=int(input())
    c=arr[b-1]
    arr.sort()
    for i in range(a):
        if arr[i]==c:
            print(i+1)
            break
    