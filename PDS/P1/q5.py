"""
Write a program which will allow user to enter 10 numbers and display largest odd and even
number from them. Also display the count of odd and even numbers. 
"""
# Prompt the user to enter 10 digits
print("ENTER 10 DIGITS : ", end="")
input_str = input()

# Convert the input string into a list of integers
num = list(map(int, input_str.split()))

# Initialize counters and variables for largest odd and even numbers
count_odd = 0
count_even = 0
max_odd = float('-inf')
max_even = float('-inf')

for i in range(len(num)):
    if (num[i] % 2 == 1):
        count_odd += 1
        if (num[i] > max_odd):
            max_odd = num[i]
    else:
        count_even += 1
        if (num[i] > max_even):
            max_even = num[i]

# Display the largest odd and even numbers, along with their counts
print("LARGEST ODD : ", max_odd if max_odd != float(
    '-inf') else "None", "\nCOUNT OF ODD :", count_odd)
print("LARGEST EVEN : ", max_even if max_even != float(
    'inf') else "None", "\nCOUNT OF EVEN :", count_even)