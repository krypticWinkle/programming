testcase = int(input())

for i in range (testcase):
    n = int(input())

    lst=[]

    for j in range (n):
        x=int(input())
        lst.append(x)

    for j in range (n):
        if n == 1 and lst[0]%2 == 1:
            print("-1")
        else:
            if lst[0]%2 == 0:#1st number is even
                print("1\n1\n")
            else: #1st number is odd
                
                if lst[1]%2 == 1: #2nd number is odd
                    print("2\n1 2\n")
                    
                else: #2nd number is even    
                    print("1\n2\n")
            break




'''
        t = int(input())
for i in range(t):
	n = int(input())
	l = list(map(int,input().split()))
	even = []
	odd = []
 
	for i in range(n):
		if l[i]%2 == 1 and len(odd) < 2:
			odd.append(i+1)
		elif l[i]%2 == 0:
			even.append(i+1)
	if len(even):
		print(len(even))
		print(*even)
	elif len(odd)%2 == 0:
		print(len(odd))
		print(*odd)
	else:
		print(-1)
        '''