n=int(input("Enter the NUmber"))
sum=0
b=n
while n>0:
  sum=sum+n%10
  n=n/10
  
print("Sum of digits "+" of "+n+" is "+sum)
