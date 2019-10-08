# Python 3 program to find minimum number of squares to cut a paper. 


def minimumnoofSquare(a, b): 

	result = 0
	rem = 0


	if (a < b): 
		a, b = b, a 

	while (b > 0): 
	
		result += int(a / b) 

		rem = int(a % b) 
		a = b 
		b = rem 

	return result 

n = 4
m = 5

print(minimumnoofSquare(n, m)) 
