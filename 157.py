#https://acmp.ru/?main=task&id_task=157


from math import factorial
 
s = input()
l = {}
 
for i in range(len(s)):
    if s[i] in l:
        l[s[i]] += 1
    else:
        l[s[i]] = 1
 
d = factorial(len(s))
 
for i in l.keys():
    d //= factorial(l[i])
 
print(d)
