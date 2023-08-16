"""
Write a program in python to read two strings and display them on console.
Use input () functions. Perform basic operation on it.
"""
# Get the first name from the user
str1 = input("First Name: ")

# Get the last name from the user
str2 = input("Last Name: ")

# Display the first name
print(str1)

# Display the last name
print(str2)

# Display sliced portions of the names
print("\nSlicing")
print(str1[1:4])  # Display a slice of the first name
print(str2[0:-1])  # Display a slice of the last name

# Display the uppercase version of the first name
print("\nUpper and Lower")
print(str1.upper())  # Convert first name to uppercase
print(str2.lower())  # Convert last name to lowercase

# Concatenate and display the full name
print("\nConcatenation")
fullname = str1.capitalize() + " " + str2.capitalize()  # Capitalize and concatenate names
print("FULLNAME:", fullname)

# Create and display an introduction using a formatted string
print("\nFormat strings")
INTRO = "Hello guys my name is {}"
print(INTRO.format(fullname))
