# cook your dish here
x=int(input())
for _ in range(x):
    a=int(input())
    b=int(a%10)
    if b==0:
        print(0)
    elif b==5:
        print(1)
    else:
        print(-1)