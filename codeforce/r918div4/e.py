def generateallsubsequences(s):
    if len(s)==0:
        return [[]]
    else:
        t=generateallsubsequences(s[1:])
        return t+[[s[0]]+i for i in t]
t=[1,2,3,4]
print(generateallsubsequences(t))