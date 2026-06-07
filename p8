#program to check leap year
year=int(input("enter a year"))
if (year%400==0)and(year%100==0):
    print("its a leap year")
elif(year%4==0)and(year%100!=0):
    print("its a leap year")
else:
    print("the year which u entered is not a leap year")


