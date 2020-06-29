# Author: Ahmed Moawad
# Date: June 29, 2020

class Stack():
    def __init__(self, initial_size = 10):
        self.arr = [0 for _ in range(initial_size)]
        self.top = -1
        self.num_elements = 0

    def push(self, element):
        self.arr[self.top] = element
        self.top += 1
        self.num_elements += 1

    def size(self):
        return self.num_elements
    
    def is_empty(self):
        return self.top == 0

    def pop(self):
        if self.is_empty():
            self.top = 0
            return None
        self.top -= 1
        self.num_elements -= 1
        return self.arr[self.top]



# Test our Stack:
S = Stack(20)
S.push(10)
S.push(11)
S.push(12)
S.push(13)
S.push(14)
S.push(15)

print("The size = ", S.size())
print("The 1st poped element: ",S.pop())
print("The 2nd poped element: ",S.pop())
print("The 3rd poped element: ",S.pop())
print("The size after pop = ", S.size())