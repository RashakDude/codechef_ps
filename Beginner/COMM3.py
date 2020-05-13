# cook your dish here
import math

x=int(input())
for _ in range(x):
    n=int(input())
    (x1,y1)=map(int,input().split())
    (x2,y2)=map(int,input().split())
    (x3,y3)=map(int,input().split())
    a=math.sqrt(((x2-x1)**2)+((y2-y1)**2))
    b=math.sqrt(((x3-x2)**2)+((y3-y2)**2))
    c=math.sqrt(((x3-x1)**2)+((y3-y1)**2))
    num=0
    if a<=n:
        num+=1
    if b<=n:
        num+=1
    if c<=n:
        num+=1
        
    if num>=2:
        print("yes")
    else:
        print("no")
    