n = int(input())

for names in range(n):
    s = input().strip()
    if len(s) > 10:
        print(f"{s[0]}{len(s)-2}{s[-1]}")
    else:
        print(s)
