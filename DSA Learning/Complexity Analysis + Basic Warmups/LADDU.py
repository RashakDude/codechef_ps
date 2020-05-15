D={"INDIAN":200,"NON_INDIAN":400}
for _ in range(int(input())):
	M=input().split()
	total=0
	for z in range(int(M[0])):
		L=input().split()
		if L[0]=="CONTEST_WON":
			total+=300+max(20-int(L[1]),0)
		elif L[0]=="TOP_CONTRIBUTOR":
			total+=300
		elif L[0]=="BUG_FOUND":
			total+=int(L[1])
		else:
			total+=50
	print(total//D[M[1]])