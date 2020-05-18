for _ in range(int(input())):
    n, k = map(int, input().split())
    s = input()
    count1 = 0
    count2 = 0
    for i in s:
        if i.isupper():
            count1+=1
        else:
            count2+=1 
    if (count1+k)>=n and (count2+k)>=n:
        print("both")
    elif (count2+k)>=n:
        print("chef")
    elif (count1+k)>=n:    
        print("brother")
    else:
        print("none")