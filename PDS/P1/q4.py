"""
Write a program in python to implement menu driven simple calculator. 
"""
# Function to perform addition
def add(x, y):
    return round(x + y, 2)

# Function to perform subtraction
def subtract(x, y):
    return round(x - y, 2)

# Function to perform multiplication
def multiply(x, y):
    return round(x * y, 2)

# Function to perform division
def divide(x, y):
    if y != 0:
        return round(x / y, 2)
    else:
        return "Cannot divide by zero"



# Display the menu options
print("----- Simple Calculator -----\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit")

# Input choice
while True:
    print("\nEnter a choice: ", end="")
    choice = int(input())
    if choice == 5:
        break
    if choice not in [1, 2, 3, 4]:
        print("ENTER PROPER NUMBER.")
        continue
    num1 = float(input("First Number: "))
    num2 = float(input("Second Number: "))

    if choice == 1:
        print(f"{num1} + {num2} = {add(num1, num2)}")
    elif choice == 2:
        print(f"{num1} - {num2} = {subtract(num1, num2)}")
    elif choice == 3:
        print(f"{num1} * {num2} = {multiply(num1, num2)}")
    elif choice == 4:
        print(f"{num1} / {num2} = {divide(num1, num2)}")
