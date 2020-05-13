x=int(input())
for _ in range(x):
    arr = list(map(int,input().split()))
    arr.sort()
    if arr[0]==arr[1] and arr[2]==arr[3]:
        print("YES")
    else:
        print("NO")