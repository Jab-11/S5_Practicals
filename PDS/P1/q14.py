"""
Write a program to create a set of students’ enrolment number and sort them and display it.
"""
# Function to take input of enrollment numbers
def enrollment_input(n):
    enr = set()
    for i in range(n):
        x = int(input(f"Sr. No. {i+1} : "))
        enr.add(x)
    return enr

n = int(input("Enter number of students : "))
ENR = enrollment_input(n)
print(f"Sorted Enrollment numbers : {sorted(ENR)}")