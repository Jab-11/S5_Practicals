"""
Write a Python program to create 12 fixed dates from a specified date over a given period. The
difference between two dates is 10. 
"""
from datetime import date,timedelta

# Crete the difference between days using timedelta
DIFF=timedelta(days=10)

# Input starting date
print("Enter the starting date (YYYY-MM-DD):")
start_date_str = input()
yy, mm, dd = int(start_date_str[0:4]), int(start_date_str[5:7]), int(start_date_str[8:10])
st_date = date(yy, mm, dd)

# another way
# from datetime import datetime
# date_str = input("Enter a date (YYYY-MM-DD): ")
# st_date = datetime.strptime(date_str, "%Y-%m-%d").date()

# Print 12 dates in gap of 10 days
for i in range(12):
    print("Day",i+1,":",st_date)
    st_date+=DIFF
