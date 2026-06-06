class empolyee:
    def __init__(self,role,dept,salary):
        self.role=role
        self.dept=dept
        self.salary=salary

    def showdata(self):
        print("rol=",self.role) 
        print("department=",self.dept)
        print("salary=",self.salary)

class engineer(empolyee):
    def __init__(self,name,age):
        self.name=name
        self.age=age
        super().__init__("engineer","it","750000")

engg1=engineer("aj",40)   
engg1.showdata()     

