a = str(input())
b = ""
for i in a:
    if i.isupper():
        b = b+i.lower()
    if i.islower():
        b = b+i.upper()
print(b)