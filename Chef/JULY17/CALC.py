import math
t = int(input())
while t>0:
	x = input().split(' ')
	print( int((int(x[0]) - ((math.ceil((float(x[0]) / float(x[1])) / 2)) * float(x[1]))) * (math.ceil((float(x[0]) / float(x[1])) / 2) )))
	t-=1;