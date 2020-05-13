x = int(input())
for _ in range(x):
    a=input()
    b=a[::-1]
    c=int(a)
    d=int(b)
    if c == d:
        print("wins")
    else:
        print("losses")