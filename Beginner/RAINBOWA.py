# cook your dish here
for _ in range(int (input())):
    x = int(input())
    flag1 = 1
    flag2 = 1
    arr = list(map(int,input().split()))
    
    for i in range(1,8):
        if i not in arr:
            flag1 = 0
            break
    
    if x%2 == 0 :
        arr1 = arr[:x//2]
        arr2 = arr[x//2:]
    else :
        arr1 = arr[:x//2]
        arr2 = arr[x//2+1:]
    
    if arr1 != arr2[::-1]:
        flag2 = 0

    if flag1 and flag2 :
        print("yes")
    else :
        print("no")