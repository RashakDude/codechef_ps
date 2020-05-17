for _ in range(int(input())):
    arr =  input()
    count=0
    mx=0
    for i in arr:
        if(i =='('):
            count+=1
        else:
            count-=1
        mx = max(mx,count)
    print('(' * mx, end="")
    print(')' * mx )