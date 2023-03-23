#https://acmp.ru/?main=task&id_task=945


n, m = map(int, input().split())
a = set(map(int, input().split()))
b = list(map(int, input().split()))
 
for i in range(m):
    if b[i] in a:
        print("YES")
    else:
        print("NO")
