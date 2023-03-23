#https://acmp.ru/?main=task&id_task=414


l = int(input())
a, b = map(int, input().split())
m = list(map(int, input().split()))
n = [0] * len(m)
for i in range(len(m)):
    if m[i] == 1:
        n[i] = 1
    else:
        n[i] = n[m[i] - 2] + 1
 
if a == 1 or b == 1:
    print(1)
else:
    while n[a - 2] > n[b - 2]:
        a = m[a - 2]
    while n[b - 2] > n[a - 2]:
        b = m[b - 2]
         
    while a != b:
        a = m[a - 2]
        b = m[b - 2]
     
    print(a)
