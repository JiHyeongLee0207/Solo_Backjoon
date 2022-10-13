a = int(input())
for i in range(1, a + 1) :
    for _ in range(i) :
        print("*", end = "")
    if i != a :
        print("\n", end = "")