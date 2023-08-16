"""
Ram wants to know age of his grandfather, who was born on 18th December, 1950. Kindly help
ram to know how old is his grandfather? Also, print the calendar for the month and year on which
ram’s grandfather was born. 
"""
import calendar
from datetime import date
from dateutil.relativedelta import relativedelta

# Grandfather's birthdate
YY = 1950
MM = 12
DD = 18

# Print the calendar for the birth month
print("Ram's Grandfather's birth month:")
print(calendar.month(YY, MM))

# Create the date object of today's date and grandfather's birthday
todays_date = date.today()
birthday = date(YY, MM, DD)

# Print today's date
print("Current date:", todays_date)

# Calculating the age using relativedelta
age = relativedelta(todays_date, birthday)
print("\nRam's Grandfather's age:", age.years, "years", age.months, "months", age.days, "days")
