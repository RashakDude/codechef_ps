my_string=["ch","che","chef","he","hef","ef"]
flag=0
for i in range(int(input())):
    n=input().strip()
    for i in my_string:
        if i in n:
            flag=flag+1
            break
print(flag)