l=int(input())
b=int(input())
area=l*b
perimeter=(l+b)*2
if area>perimeter:
    print("Area")
    print(area)
elif perimeter>area:
    print("Peri")
    print(perimeter)
else:
    print("Eq")
    print(perimeter)