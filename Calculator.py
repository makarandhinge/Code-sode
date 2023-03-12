i=int(input("Enter no i:"))
j=int(input("Enter no j:"))

ch=input("Enter 1 for addition: \nEnter 2 for substraction: \nEnter 3 for Multiplication: \nEnter 4 for division: \nEnter 5 for Modulus: \nEnter 6 for Exponent: \nEnter 7 for floor division:) ")
ch=int(ch)

if ch==1 :
    print("Addition of",i,"and",j,"is :", i+j)
elif ch==2 :
    print("Substraction of",i,"and",j,"is:", i-j)
elif ch==3 :
    print("Multiplication of",i,"and",j,"is:", i*j)
elif ch==4 :
    print("Division of",i,"and",j,"is:",i/j)
elif ch==5 :
    print("Modulus of",i,"and",j,"is:",i%j)
elif ch==6 :
    print("Exponential of",i,"and",j,"is:",i**j)
elif ch==7 :
    print("Floor Division of",i,"and",j,"is:",i//j)
    
    
    
    
else :
    print("wrong choice")                                                     
    


                                                                                                                    
