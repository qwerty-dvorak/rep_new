def cf(x,n):
    if n == 0:
        return 0
    else:
        return 1/(x+cf(x,n-1))
print(3+cf(3,5))