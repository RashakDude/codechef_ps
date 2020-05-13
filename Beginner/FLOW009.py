x=int(input())
for _ in range(x):
    (a,b)=map(float,input().split())
    if a>1000:
        a*=0.9
    a*=b
    print("%.6f" % a)