#program to check leap year
year=int(input("enter a year"))
if (year%400==0)and(year%100==0):
    print("its a leap year")
elif(year%4==0)and(year%100!=0):2
    print("its a leap year")
else:
    print("the year which u entered is not a leap year")

#progrm to check largest of 3 numbers 
a=12
b=9
c=23
if(a>b)and(a>c):
    print("a is largest number")
elif(b>a)and(b>c):
    print("b is the larhest number")
else:
    print("c is largest number")       
