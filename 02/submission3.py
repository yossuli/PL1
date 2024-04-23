def factorial(n):
  if n==0:
    return 1
  tmp=factorial(n-1)*n
  print(str(n)+"! = ",tmp)
  return tmp

factorial(50)