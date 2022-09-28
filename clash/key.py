p=[]
for i in range(int(input())):
    p.append(list(map(int,input().split())))
#print(p)
print()
print(max(p, key=lambda x:x[0]**2+x[1]**2))