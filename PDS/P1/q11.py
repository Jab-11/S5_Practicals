"""
Write a python program to find occurrence of an element in the list.
"""
# Function to find occurrnence of an element
def find_occ_list(list,x):
    found=False
    print(f"{x} is at index : ",end="")
    for i in range(len(list)):
        if x==list[i]:
            found=True
            print(i,end=" ")
    if found==False:
        print("Not found.")

# Function to take input in a list
def list_input(n):
    l=[]
    for i in range(n):
        x=int(input(f"Element {i+1} : "))
        l.append(x)
    return l

n = int(input("Enter the size of list : "))
num = list_input(n)
key = int(input("Enter element to fine : "))
find_occ_list(num,key)

