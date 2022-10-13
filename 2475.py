a = []
sum = 0
a = input().split()
for i in range(5) :
    a[i] = int( a[i]) * int(a[i] )
    sum += a[i]
sum %= 10
print(sum)