#User function Template for python3

# Define the Person class

class Person:
    def __init__(self,name="Geeks",age=10):
        self.name=name
        self.age=age
    
    def set_name(self,name):
        self.name=name
    def set_age(self,age):
        self.age=age
    
    def get_age(self):
        return self.age
    def get_name(self):
        return self.name