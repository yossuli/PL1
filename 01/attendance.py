def sigma(n):
    if n == 1:
        return 1
    else:
        return n + sigma(n-1)

print(sigma(1))