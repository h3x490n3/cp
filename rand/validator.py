def     validator(n:int):
    if str(n).count('4') == len(str(n)) or str(n).count('7') == len(str(n)) or str(n).count('4') + str(n).count('7')== len(str(n)):
        return True
    return False

n = int(input())

print(validator(n))
