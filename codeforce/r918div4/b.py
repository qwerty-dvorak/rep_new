t=int(input())
l="ABC"
f=0
for _ in range(t):
    a=list(input())
    for i in range(l):
        for j in range(a):
            if i=j:
                break
            else:
                f=1
        if f=1:
            print(i)
