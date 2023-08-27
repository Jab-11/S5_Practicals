"""
Create a tuple to store value of student's marks of pds subject and display it.
"""
# Function to take input of student's name and marks
def input_pds_marks():
    name = input("Enter student's name : ")
    marks = int(input("Enter student's marks : "))
    return name, marks

# Function to display marks from list
def display_marks(pds_marks_list):
    print("\n PDS MARKS")
    print("-----------")
    for i in pds_marks_list:
        print(f" {i[0]}  {i[1]} ")
    

PDS_MARKS=[]

n = int(input("Enter number of students : "))

for i in range(n):
    print(f"\nSr. no. {i+1}")
    student_info = input_pds_marks()
    PDS_MARKS.append(student_info)

PDS_MARKS=tuple(PDS_MARKS)

display_marks(PDS_MARKS)
