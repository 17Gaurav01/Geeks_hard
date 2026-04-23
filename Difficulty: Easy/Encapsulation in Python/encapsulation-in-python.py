#User function Template for python3

# Define the Person class
class Person:
    def __init__(self,name = "Geeks",age = 10):
        self.__name = name
        self.__age = age
        
    def get_name(self):
        return self.__name
    def set_name(self,name):
        self.__name=name
        
    def set_age(self,age):
        self.__age=age
    def get_age(self):
        return self.__age
        