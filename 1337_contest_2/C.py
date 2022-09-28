n = int(input())

l=[0, 1, 1]

while l[-1] < n:
    l+=[l[-1] + l[-2]]

if n >= 3:
    print(l[-2],l[-4],l[-5])
elif n == 2:
    print(1,1,0)
elif n == 1:
    print(1,0,0)
elif n == 0:
    print(0,0,0)
