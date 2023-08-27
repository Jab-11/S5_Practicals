"""
Write a program to perform add, delete, union, intersection, difference, and symmetric difference
and membership testing operation for the given sets. 
"""
s1 = {1,2,4,8}
s2 = {2,4,6}

def display_set():
    print(f"Set1: {s1}\nSet2: {s2}")

display_set()

# Add opertion
print("\nAdd opertion")
x1=int(input("Number to add in set1 : "))
s1.add(x1)
x2=int(input("Number to add in set2 : "))
s2.add(x2)
display_set()

# Delete opertion
print("\nDelete opertion")
x1=int(input("Number to remove from set1 : "))
s1.discard(x1)
x2=int(input("Number to remove from set2 : "))
s2.discard(x2)
display_set()

# Union opertion
print("\nUnion opertion")
print(f"Set1 \u222a Set2 = {s1.union(s2)}")

# Intersection operation
print("\nIntersection operation")
print(f"Set1 \u2229 Set2 = {s1.intersection(s2)}")

# Difference operation
print("\nDifference operation")
print(f"Set1 - Set2 = {s1.difference(s2)}")

# Symmetric Difference operation
print("\nSymmetric Difference operation")
print(f"Set1 \u2206 Set2 = {s1.symmetric_difference(s2)}")

# Membership Testing operation
print("\nMembership Testing operation")
x1=int(input("Number to check in set1 : "))
in_set1 = x1 in s1
print(f"{x1} is in Set 1: {in_set1}")

x2=int(input("Number to check in set2 : "))
in_set2 = x2 in s2
print(f"{x2} is in Set 2: {in_set2}")  
    


