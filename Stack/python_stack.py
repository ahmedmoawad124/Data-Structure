# Author: Ahmed Moawad
# Date: June 29, 2020

class Stack:
    def __init__(self):
         # Initialize the Stack
        self.items = []
    
    def size(self):
         # Check the size of the Stack
        return len(self.items)
        
    def push(self, item):
         # Push item onto Stack
        self.items.append(item)
            
    def pop(self):
         # Pop item off of the Stack
        if self.size()==0:
            return None
        else:
            return self.items.pop()