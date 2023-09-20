print("Hello World")

x = y = z = 10
print(x)
print(y)
print(z)

x,y,z = 1,2,3

print(x)
print(y)

x = 3.5

print(type(x))

z = 1+2j

print(type(z))


#Python standard types
"""Number ----> Int(1,2,4,5,)
       ----> float(1.2,1.4,1.5)
      -----> complex Number(i+2j, 2+3j)
      
String
       ---> Group of Characters enclosed usingle quotes,
       double quotes or in triple quotes;
       '+' Concatenation
       '*' Repeatation
       '[:]' Slicing (To seperate) 
       
"""
x = "Ghaziabad"
city = "Ghaziabad"
State = "UP"
print(city)
print(type(x))
print(State+city)
print(city*4)

print(x[0:2])
print(x[0:4])
print(x[3:4])
print(x[-3:-1])

"""
       
List ---> It is a collection of element of different type;
    --->Enclosed under []
    ---> Seperated by commas
    ---> Slicing, '+', "*"
    --->It is mutable
    
"""
ml = [1,2,2.5,"Hello"]
print(ml)
print(type(ml))
print(ml[1:3])
print(ml[2])
nl = [5,6,7,8]
ml = ml+nl
print(ml*12)
print(ml)


"""

Tuple  ---> It is a collection of element of different type;
    --->Enclosed under ()
    ---> Seperated by commas
    ---> Slicing, '+', "*"
    --->It is immutable

"""

ml = (1,2,2.5,"Hello")





"""
Dictionary   ---->  Set of associated pairs seperated by commas
             ----> enclosed in braces{}
             ----> No slicing because no indexing
             ---->{Key:value}

"""
"""
Set 
    ----> Elements are unique
    ----> Index is not there
    ---->
      
 """




