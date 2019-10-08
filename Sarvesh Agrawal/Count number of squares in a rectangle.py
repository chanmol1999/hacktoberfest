# Python program to count squares in a rectangle of size m x n 

def countnoofSquares(m, n): 
	

	if(n < m): 
		temp = m 
		m = n 
		n = temp 
		

	return ((m * (m + 1) * (2 * m + 1) /
		6 + (n - m) * m * (m + 1) / 2)) 


if __name__=='__main__': 
	m = 2
	n = 2
	print("Count of squares : "
		,int(countnoofSquares(m, n))) 


