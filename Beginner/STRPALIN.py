# cook your dish here
for _ in range(int(input())):
    a = input()
    b = input()
    f = False
    for i in a:
        if i in b:
            f = True
            break
    if f == True:
        print('Yes')
    else:
        print('No') 