"""
Write a Python function to check whether a string is a pangram or not. 
-A pangram is a sentence containing every letter in the English Alphabet.
"""
def pangram(input_str):
    # Convert 'a' to its unicode
    ch = ord('a') 
    input_str = input_str.lower()
    # Loop from 'a' to 'z' (unicode)
    while ch <= ord('z'):
        # Convert unicode to character and check  
        if chr(ch) not in input_str:  
            return False
        # Increment unicode 
        ch += 1
    return True

str = input("Enter a string : ")
if pangram(str):
    print(f"{str} is a pangram sentence.")
else:
    print(f"{str} is not a pangram sentence.")
    