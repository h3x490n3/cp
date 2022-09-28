import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

n = int(input())

l=[]
for i in range(1,n//2):
    if (int(n/i) - n/i == 0):
        l+=[(i,n/i)]

print(l)
g=[]
for d in l:
    g+=[abs(d[0]-d[1])]
    
print(int(min(g)))