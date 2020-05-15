for _ in range(int(input())):
    x = input()
    s1 = x[:len(x)//2]
    if len(x) % 2==0:
        s2 = x[len(x)//2:]
    else:
        s2 = x[len(x)//2+1:]
    if sorted(s1) == sorted(s2):
        print("YES")
    else:
        print("NO")