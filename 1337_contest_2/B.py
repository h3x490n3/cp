n = int(input());

g=n+1
while len(set(str(g))) != len(str(n)):
    g+=1
print(g)
