n = int(input())
def bar(n):
 i=2
 f=[]
 while i * i <= n:
  if n % i:
   i+=1
  else:
   n//=i
   f.append(i)
 if n > 1:f.append(n)
 return f
def foo(i:int):
 p=1
 for c in str(i):p*=int(c)
 if p == n:return True
 else:return False
i = 1
print(bar(n))
exit(0)
for c in bar(n):
 if len(str(c)) > 1:print("Impossible");exit(0)
while True:
 if (foo(i) == True):break
 i+=1
print(i)