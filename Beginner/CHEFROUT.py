for _ in range(int(input())):
    x = input()
    count = 0
    for i in range(len(x)-1):
        if ord(x[i]) > ord(x[i+1]):
            count = 1
            break
    if count == 0:
        print('yes')
    else:
        print("no")