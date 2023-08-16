"""
Write a Python function to check whether a number is "Perfect" or not. Perform it with and
without user defined function. 
"""
num=int(input("Enter a number : "))
sum=0
for i in range(1,num):
    if num%i==0:
        sum+=i
if sum == num:
    print(f"{num} is a perfect number.")
else:
    print(f"{num} is not a perfect number.")