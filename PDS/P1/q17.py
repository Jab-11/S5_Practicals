"""
Write a program to create a dictionary from string in which individual character is key and its
count in string is value of key. 
"""
# Function to create dictionary that stores character and its count
def create_dict(str):
    dict={}
    for ch in str:
        if ch != ' ':
            if ch in dict:
                dict[ch]+=1
            else:
                dict[ch]=1
    return dict

str = input("Enter a String : ")
count = create_dict(str)

# Display dictionary
for key,val in dict.items():
        print(f"{key} : {val}")