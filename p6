#to find sqare any number
num=int(input("enter the number"))
sr=num**(1/2)
print("sq root of thr number is :",sr)


#calucalte area of traingel
b=float(input("enter base of thr triangle"))
h=float(input("enter the hight of thr traingle"))
area=1/2*b*h
print("area of triangle is :",area)



#write a python program to swap two variables

#using trmporary variable 
x=23
y=12

temp=x
print("the value of temp variable is.",temp)
x=y
print("the value of x is .",x)
y=temp
print("the value y is .",y)

#without using temp variable

x=23
y=65

x,y=y,x

print("the valur of x is .",x)
print("the value of y is.",y)
