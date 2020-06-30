class Queue:
    def __init__(self):
         # Initialize the Queue
            self.arr = []
    
    def size(self):
         # Check the size of the Queue
        return len(self.arr)
    
    def enqueue(self, item):
         # Enter item into Queue
        self.arr.append(item)
            
    def dequeue(self):
         # Remove item from the Queue
        return self.arr.pop(0)