#https://acmp.ru/?main=task&id_task=329


from copy import copy
 
n = int(input())
a = list(map(int, input().split()))
  
x1 = a[0]
l1 = [1]
 
if x1 < 0:
    x2 = a[1]
    l2 = [2]
else:
    x2 = a[1] + x1
    l2 = [1, 2]
 
for i in range(2, n):
    if x1 > x2:
        l1.append(i + 1)
        l1, l2 = l2, l1
        x1, x2 = x2, a[i] + x1
    else:
        l1 = copy(l2)
        l2.append(i + 1)
        x1, x2 = x2, a[i] + x2
  
print(x2)
print(*l2)
