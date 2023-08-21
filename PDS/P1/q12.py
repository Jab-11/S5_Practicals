"""
Write a python program to Sort the list according to the column using lambda. Display smallest
and largest number from the list. Perform addition of all the members of list and display it. 
"""
def sort_col(list,c):
    list.sort(key=lambda x:x[c])
    print(f"\nSorted list by col. {c}",list)

list=[["c",1972],["java", 1995], ["c++", 1983], ["python", 1989], ["kotlin",2011]] 
print("List : ",list)
sort_col(list,1)



