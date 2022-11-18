l1 = []
l2 = []

a, b = map(int, input().split())
for i in range(0, a):
    l1.append(input().split(" "))
    if len(l1[i]) > b:
        l1[i] = l1[i][0:b]

for i in range(0, a):
    l2.append(input().split(" "))
    if len(l2[i]) > b:
        l2[i] = l2[i][0:b]

for i in range(0, a):
    for j in range(0, b):
        print(int(l1[i][j])+int(l2[i][j]), end=' ')
    print("")