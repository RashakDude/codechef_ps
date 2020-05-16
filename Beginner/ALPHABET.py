a = input()

for k in range(int(input())):
    b = input()
    flag = 0
    for i in range(len(b)):
        if b[i] not in a:
            flag = 1
            break
    if flag == 0:
        print("Yes")
    else:
        print("No")