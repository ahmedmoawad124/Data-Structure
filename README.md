## Why data structures?
Data structures are containers that organize and group data together in different ways. When you write code to solve a problem, there will always be data involved—and how you store or structure that data in the computer's memory can have a huge impact on what kinds of things you can do with it and how efficiently you can do those things.
## Arrays vs. lists (general) vs. Python lists
The distinction between arrays and lists can be a little confusing, especially because of how Python implements the data structure it calls a "list". Below, we'll go over some key points that should make this clearer.
### Arrays
When an array is created, it is always given some initial size—that is, the number of elements it should be able to hold (and how large each element is). The computer then finds a block of memory and sets aside the space for the array.

all of the elements are:

1)next to one another  
2)the same size

this means that if we know the location of the first element, we can calculate the location of any other element.
### Lists (general)
In contrast, the elements of a list may or may not be next to one another in memory! For example, linked lists, where each list item points to the next list item—but where the items themselves may be scattered in different locations of memory. In this case, knowing the location of the first item in the list does not mean you can simply calculate the location of the other items. This means we cannot use indices to directly access the list items as we would in an array.
### Python lists
In Python, we can create a list using square brackets [ ]. For example:
```
>>> my_list = ['a', 'b', 'c']
>>> my_list
['a', 'b', 'c']
```
And then we can access an item in the list by providing an index for that item:
```
>>> my_list[0]
'a'
>>> my_list[1]
'b'
>>> my_list[2]
'c'
```
a Python list is essentially implemented like an array (specifically, it behaves like a dynamic array) the elements of a Python list are contiguous in memory, and they can be accessed using an index.

In addition to the underlying array, a Python list also includes some additional behavior. For example, you can use things like (pop) and (append) methods on a Python list to add or remove items. Using those methods, you can essentially utilize a Python list like a stack (which is another type of data structure we'll discuss shortly).
## Linked list
A singly linked list is a data structure having a list of elements where each element has a reference pointing to the next element in the list. Its elements are generally referred to as nodes; each node has a data field containing a data value and a next field pointing to the next element in the list (or null if it is the last element in the list). The diagram below depicts a linked list of length 3:
![image](https://user-images.githubusercontent.com/59261333/84934863-319cb700-b0d8-11ea-9d4a-bb346ad5233a.png)
### Types of Linked Lists
#### 1. Singly Linked Lists
In this linked list, each node in the list is connected only to the next node in the list.
![image](https://user-images.githubusercontent.com/59261333/84935048-788aac80-b0d8-11ea-9c5a-1511196363fa.png)
#### 2. Doubly Linked Lists
This type of list has connections backwards and forwards through the list.
![image](https://user-images.githubusercontent.com/59261333/84935119-90fac700-b0d8-11ea-9f9a-896c722ad05a.png)
#### 3. Circular Linked Lists
Circular linked lists occur when the chain of nodes links back to itself somewhere. For example NodeA -> NodeB -> NodeC -> NodeD -> NodeB is a circular list because NodeD points back to NodeB creating a loop NodeB -> NodeC -> NodeD -> NodeB.
![image](https://user-images.githubusercontent.com/59261333/84935197-a839b480-b0d8-11ea-8d16-c7a2d9932e3d.png)
#### Implement a linked list class. Your class should be able to:
- Append data to the tail of the list and prepend to the head
- Search the linked list for a value and return the node
- Remove a node
- Pop, which means to return the first node's value and delete the node from the list
- Insert data at some position in the list
- Return the size (length) of the linked list
