import math

x=int(input())
for _ in range(x):
    (n,a,b)=map(int,input().split())
    x=(math.sqrt(2)*n)/a
    y=(n*2)/b
    if x<y:
        print('Stairs')
    else:
        print('Elevator')