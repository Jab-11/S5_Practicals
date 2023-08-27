"""
Write a program to list of objects of dictionary of student details sort them according to the SPI of
students. 
"""
# Function to add information of student
def insert_info(dict_list):
    dict={}
    name = input("\nStudent Name : ")
    enr = int(input("Enrollment No. : "))
    spi = float(input("SPI : "))
    dict[enr] = {'name':name,'spi':spi}
    dict_list.append(dict)

# Function to sort list by SPI
def sort_list(dict_list):
    dict_list.sort(key=lambda x: list(x.values())[0]['spi'])
    for student_dict in dict_list:
        enr = list(student_dict.keys())[0]
        name = student_dict[enr]['name']
        spi = student_dict[enr]['spi']
        print(f"Enrollment No.: {enr}, Name: {name}, SPI: {spi}")

student_info_list = []
n = int(input("Enter number of students : "))
for _ in range(n):
    insert_info(student_info_list)

sort_list(student_info_list)



