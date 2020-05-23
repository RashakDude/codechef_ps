for i in range(int(input())):
    a=list(input().lower().split())
    if(len(a) == 1):
        print(a[0].capitalize())
    elif(len(a) == 2):
        print(a[0][0].upper()+'. '+a[1].capitalize())
    elif(len(a) == 3):
        print(a[0][0].upper()+'. '+a[1][0].upper()+'. '+a[2].capitalize())