s=input()
t=input()


s1=s[::-1]
s2=t[::-1]

l = min(len(s), len(t))
i = 0

while i < l:
    if (s1[i] != s2[i]):
        break
    i+=1


print(len(s)+len(t)-2*i)
