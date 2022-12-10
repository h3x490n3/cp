s = input()

# summ=0
# i=0
# for c in s:
# 	summ+=(((ord(c)-ord('a')+1)*i)+1)
# 	print("Char: '"+c+"': "+str(((ord(c)-ord('a')+1) * i) + 1))
# 	i+=1
# print()
# print("Sum: " + str(summ))

# print
#abcdef	75
#6
somme=1
i=1
for c in s:
	if c.isupper():
		somme^=(ord(c) - ord('A') + 1)*i
	elif c.islower():
		somme^=(ord(c) - ord('a') + 1)*i
	i+=1

print(somme)