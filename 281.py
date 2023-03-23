#https://acmp.ru/?main=task&id_task=281


n, m = map(int, input().split())
end = 0
 
for j in range(m, n + 1):
    s, l = 1, 1
    for i in range(n - j + 1, n + 1):
        if i != 0:
            s *= i
 
    for i in range(1, j + 1):
        l *= i
    end += s // l
print(end)
