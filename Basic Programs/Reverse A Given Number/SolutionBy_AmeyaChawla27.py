n=int(input("Enter the number"))
print("Reversed Number")
s=""
while n>0:
  s=s+n%10
  n=n/10
print(s)
