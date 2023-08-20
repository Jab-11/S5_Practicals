"""
Write a Python function to check whether a number is "Perfect" or not. Perform it with and
without user defined function. 
"""
# num=int(input("Enter a number : "))
# sum=0
# for i in range(1,num):
#     if num%i==0:
#         sum+=i
# if sum == num:
#     print(f"{num} is a perfect number.")
# else:
#     print(f"{num} is not a perfect number.")

#WITH UDF
def perfect_num(n):
    # Initialize sum to store the sum of proper divisors
    sum=0

    # Calculate the sum of all proper divisors
    for i in range(1,n):
        if n%i==0:
            sum+=1

    # Check if sum is number itself 
    if sum==n:
        return True
    else:
        return False

num = int(input("Enter a number : "))
if perfect_num(num):
    print(f"{num} is a perfect number.")
else:
    print(f"{num} is not a perfect number.")
