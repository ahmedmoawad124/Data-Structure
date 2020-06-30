#include<iostream>

using namespace std;

template<class T>

class Queue
{
private:
    struct Node{
        T data;
        Node* next;
    };

    Node* front;
    Node* tail;
    int queue_size;
public:
    Queue();
    ~Queue();
    void enqueue(T value);
    T dequeue();
    bool IsEmpty();
};
template<class T>
Queue<T>::Queue():front(nullptr), tail(nullptr), queue_size(0){}

template<class T>
Queue<T>::~Queue(){}

template<class T>
void Queue<T>::enqueue(T value){

    // Create new node
    Node* new_node = new Node;
    new_node->data = value;
    new_node->next = nullptr;
    //=========================
    if(IsEmpty()){
        front = new_node;
        tail = new_node;
    }
    else
    {
        tail->next = new_node;
        tail = new_node;
    }

    queue_size++;
}

template<class T>
T Queue<T>::dequeue(){
    if(IsEmpty())
    {
        cout<<"The queue is empty"<<endl;
        return 404;
    }

    else
    {
        Node* temp = front;
        T val = front->data;
        front = front->next;
        delete temp;
        queue_size--;
        return val;
    }
}

template<class T>
bool Queue<T>::IsEmpty(){
    return (queue_size == 0);
}
