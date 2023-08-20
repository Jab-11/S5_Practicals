"""
Write a program to count a total number of lines and count the total number of lines starting with
‘PDS’ from the given text file.
"""
def read_file(filename):
    with open(filename, "r") as f:
        content = f.read()
    return content

def count_lines(content):
    lines = content.count("\n")+1
    return lines

def count_pds(content):
    content=content.lower()
    pds_count = content.count("\npds")
    return pds_count

filename = input("Enter filename: ")
content = read_file(filename)

print(f"Total number of lines: {count_lines(content)}")
print(f"Total number of lines starting with 'PDS': {count_pds(content)}")