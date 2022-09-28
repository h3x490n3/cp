n,k = map(int, input().split()) 

h = list(map(int, input().split()))

res=0
for i in range(k):
    res+=h[i]
idx=0
mm=res
for i in range(k,len(h)):
    res = res + h[i] - h[i - k]
    if mm > res:   
        idx = i
        mm = res
if idx-k+2 > 0:
    print(idx-k+2)
else:
    print(1)
