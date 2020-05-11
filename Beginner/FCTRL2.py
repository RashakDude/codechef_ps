for _ in range(int(input())):
    x = int(input())
    b = 1
    for i in range(2,x+1):
        b *= i
    print(b)