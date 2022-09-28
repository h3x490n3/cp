n = int(input())

for i in range(1,n+1):
    if n % i == 0:
        if (str(i).count('4') + str(i).count('7') == len(str(i)) or str(i).count('4') == len(str(i)) or str(i).count('7') == len(str(i))):
                print("YES")
                exit(0)

print("NO")
