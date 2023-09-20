nums = 5;
for i in range(1,nums):
    for j in range(1,nums):
        if(j >= i-1):
            print(" ")
        else:
            print("*")
    print()