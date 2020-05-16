for _ in range(int(input())):
    n = int(input())
    l = set(input().split())
    p = int(input())
    s = set(input().split())
    if s.issubset(l):
        print("Yes")
    else:
        print("No")