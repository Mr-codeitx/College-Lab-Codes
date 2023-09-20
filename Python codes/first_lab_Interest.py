principal = eval(input("Enter the principle amount "))
interest = eval(input("Enter the interest "))
time = eval(input("Enter the time "))
SI = (principal*interest*time)/100
A = (principal*((1+(interest/100))**time))
print("The Simple interest is ",SI)
print("The compound interest is ", A)
