def generateallpermutaion(t):
    if len(t)==1:
        return [t]
    else:
        l=[]
        for i in range(len(t)):
            for j in generateallpermutaion(t[:i]+t[i+1:]):
                l.append([t[i]]+j)
        return l
t=[1,2,3,4]
print(generateallpermutaion(t))