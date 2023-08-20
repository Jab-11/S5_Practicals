"""
Write a program to find Highest Common Factor (HCF) and Greatest Common Divisor (GCD) of
two numbers using function.
"""
def hcf(x,y):
    div_x=[]
    div_y=[]
    for i in range(1,min(x,y)+1):
        if x % i==0:
            div_x.append(i)
        if y % i==0:
            div_y.append(i)
    common = set(div_x).intersection(div_y)
    return max(common)

n1 = int(input("Enter first number : "))
n2 = int(input("Enter second number : "))
print(f"{n1} and {n2} HCF : {hcf(n1,n2)}")