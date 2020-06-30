class Queue:
    
    def __init__(self, initial_size=100):
        self.arr = [0 for _ in range(initial_size)]
        self.rear_index = -1
        self.front_index = 0
        self.queue_size = 0

    def enqueue(self, value):
        # enqueue new element
        if self.IsFull():
            return 
        else:
            self.rear_index += 1
            self.arr[self.rear_index] = value
            self.queue_size += 1
        

    def IsFull(self):
        return self.queue_size == 100
        

    def dequeue(self):
        if self.is_empty:
            return 
        
        value = self.arr[self.front_index]
        self.front_index = (self.front_index + 1) % len(self.arr)
        self.queue_size -= 1
        return value

    def size(self):
        return self.queue_size

    def is_empty(self):
        return self.size() == 0
    
    def front(self):
        # check if queue is empty
        if self.is_empty():
            return None
        return self.arr[self.front_index]