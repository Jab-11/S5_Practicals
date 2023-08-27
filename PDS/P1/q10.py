"""
Write a program to count a total number of lines and count the total number of lines starting with
‘PDS’ from the given text file.
"""
# Function to read a file
def read_file(filename):
    with open(filename, "r") as f:
        content = f.read()
    return content

# Function to count number of lines
def count_lines(content):
    lines = content.count("\n")+1
    return lines

# Function to count number of lines starting with PDS
def count_pds(content):
    content=content.lower()
    pds_count = content.count("\npds")
    return pds_count

filename = input("Enter filename: ")
content = read_file(filename)

print(f"Total number of lines: {count_lines(content)}")
print(f"Total number of lines starting with 'PDS': {count_pds(content)}")