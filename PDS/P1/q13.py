"""
Create a tuple to store value of student's marks of pds subject and display it.
"""
# # PDS_MARKS=()
# def insert_marks(name,mark):
#     list=[name,mark]
#     # PDS_MARKS+=tuple(list)

# def input_info():
#     name=input("Enter student's name : ")
#     mark=float(input("Enter student's marks : "))
#     insert_marks(name,mark)

# input_info()
# while(True):
# name = input("Enter student's name : ")
# marks = float(input("Enter student's marks : "))


def input_pds_marks():
    name = input("Enter student's name : ")
    marks = int(input("Enter student's marks : "))
    return name, marks

PDS_MARKS=[]

n = int(input("Enter number of students : "))

for i in range(n):
    print(f"\nSr. no. {i+1}")
    student_info = input_pds_marks()
    PDS_MARKS.append(student_info)

PDS_MARKS=tuple(PDS_MARKS)

# print(PDS_MARKS)
print("\n-----------")
print("|PDS MARKS|")
for i in PDS_MARKS:
    print(f"|{i[0]} | {i[1]} |")
print("-----------")
