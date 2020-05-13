x=int(input())
for _ in range(x):
    a=float(input())
    if a<1500:
        print(a*2)
    else:
        print(a*1.98 + 500)