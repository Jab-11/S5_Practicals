"""
Write a python program to Sort the list according to the column using lambda. Display smallest
and largest number from the list. Perform addition of all the members of list and display it. 
"""
# Function to sort list according to the column
def sort_col(list, c):
    list.sort(key=lambda x:x[c])
    print(f"Sorted list by col. {c}",list)

list=[["c",1972],["java", 1995], ["c++", 1983], ["python", 1989], ["kotlin",2011]] 
print("List : ",list)
sort_col(list,1)

# Creted a number list to find smallest, largest and sum.
num_list = [34, 11, 35, 89, 37]
print("\nNumber list : ",num_list)

print("Smallest : ",min(num_list))
print("Largest: ",max(num_list))
print("Addition of all members : ",sum(num_list))

