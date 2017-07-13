t = int(input())
for x in range(t):
	name = input()
	words = name.split(' ')
	for n in range(len(words)):
		if(n==len(words)-1):
			print(words[n].title(), end='')
		else:
			print(str.upper(words[n][0]), end='. ')
	print()