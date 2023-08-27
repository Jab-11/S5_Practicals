"""
Write a program to create a dictionary of student details and perform basic operation on it. 
"""
# Function to add information of student
def insert_info(dict):
    name = input("\nStudent Name : ")
    enr = int(input("Enrollment No. : "))
    age = int(input("Age : "))
    branch = input("Branch : ")
    sem = int(input("Semester : "))
    dict[enr] = {'name':name,'age':age,'branch':branch,'semester':sem}

# Function to remove information of student
def remove_info(dict):
    enr = int(input("\nEnter enrollment no. to remove : "))
    if enr in dict:
        dict.pop(enr)
    else:
        print("Enrollment No. not found.")

# Function to display information of student
def display_info(dict):
    enr = int(input("\nEnter enrollment no. to get info: "))
    if enr in dict:
        details = dict[enr]
        print(f"Enrollment Number: {enr}")
        print(f"Name: {details['name']}")
        print(f"Age: {details['age']}")
        print(f"Branch: {details['branch']}")
        print(f"Semester: {details['semester']}")
    else:
        print("Enrollment No. not found.")

student_info={}
print("\nStudent Info. Operations")
print("1. Add Student")
print("2. Remove Student")
print("3. Display Students")
print("4. Exit")
while True:
        choice = int(input("\nEnter your choice: "))
        
        if choice == 1:
            insert_info(student_info)
        elif choice == 2:
            remove_info(student_info)
        elif choice == 3:
            display_info(student_info)
        elif choice == 4:
            print("Exiting program.")
            break
        else:
            print("Invalid choice. Please choose a valid option.")