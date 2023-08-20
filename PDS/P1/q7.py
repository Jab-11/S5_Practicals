"""
Write a Python function to print first n rows of Pascal's triangle.
"""
def pascal_line(n):
    # Initialize a 2D list to store coefficients
    coeff=[[0]*(n+1) for _ in range(n)]

    # Calculate Pascal's Triangle coefficients
    for i in range(n):
        for j in range(i+1):
            if j==0:
                coeff[i][j]=1
            else:
                coeff[i][j]=coeff[i-1][j-1]+coeff[i-1][j]

    # Print the coefficients in triangle format
    for i in range(n):
        for j in range(i+1):
            print(coeff[i][j],end=" ")
        print("")
    
n = int(input("Enter a number : "))
pascal_line(n)