# cook your dish here
for _ in range(int(input())):
    x,y,z = map(int,input().split())
    if (y+z == x) or (x+y == z) or (x+z == y) :
        print("yes")
    else:
        print("no")
        