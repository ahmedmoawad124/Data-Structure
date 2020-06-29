
// Author: Ahmed Moawad
// Date: June 29, 2020

#include<iostream>
using namespace std;

template<class T>
class Stack
{
private:
    /* data */
    struct Node
    {
        /* data */
        T data;
        Node* next;
    };

    Node* top_node;
    int num_element;
    
public:
    Stack();
    ~Stack();
    void push(T value);
    T pop();
    T top();
    int size();
    bool IsEmpty();
};

// Constructor
template<class T>
Stack<T>::Stack():top_node(nullptr), num_element(0){}

// Destractor
template<class T>
Stack<T>::~Stack(){}

// Push
template<class T>
void Stack<T>::push(T value)
{
    // Create new node
    Node* new_node = new Node;
    new_node->data = value;
    if(IsEmpty())
    {
        new_node->next = nullptr;
        top_node = new_node;
        num_element = 1;
    }
    else
    {
        new_node->next = top_node;
        top_node = new_node;
        num_element++;
    }
}

// Pop
template<class T>
T Stack<T>::pop()
{
    if(IsEmpty())
    {
        cout<<"The Stack is empty"<<endl;
        return 404;     // Error 
    }
    else
    {
        T temp = top_node->data;
        top_node = top_node->next;
        num_element--;
        return temp;
    }
}

// Top
template<class T>
T Stack<T>::top()
{
    if(IsEmpty())
    {
        cout<<"The Stack is empty"<<endl;
        return 404;     // Error 
    }
    else
    {
        return top_node->data;
    }
}

// size
template<class T>
int Stack<T>::size()
{
    return num_element;
}

// Is Empty?!
template<class T>
bool Stack<T>::IsEmpty()
{
    return (num_element == 0);
}


int main(void)
{
    Stack<int> S;
    S.push(10);
    S.push(11);
    S.push(12);
    S.push(13);
    S.push(14);
    S.push(15);
    cout<<"The size = "<<S.size()<<endl;
    S.pop();
    S.pop();
    S.pop();
    cout<<"The size after pop = "<<S.size()<<endl;


    return 0;
}