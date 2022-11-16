def sieveOFEratosthenes(n):
	prime = [n+1]
	for i in range(0,n+1):
		prime[i] = True

	pnum = 2

	while(pnum*pnum<=n):
		
		if(prime[pnum] == True):
			for j in range(pnum*pnum,n+1,pnum):
				prime[j] = False

		pnum = pnum + 1

	for i in range(n+1):
		if(prime[i] == True):
			print(i)

# Driver Code 
n = int(input("Enter the range"))
print("All the Prime No's. upto ")