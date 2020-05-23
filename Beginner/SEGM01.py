# cook your dish here
t=int(input())
for _ in range(t):
    s=input()
    one=s.count("1")
    a="1"*one
    if a not in s or one==0:
        print("NO")
    else:
        print("YES")