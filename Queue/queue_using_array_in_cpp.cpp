#include<iostream>

using namespace std;

struct Queue
{
    int arr[100];
    int rear_index = -1;
    int front_index = 0;
    int queue_size = 0;

    void enqueue(int value)
    {
        if(IsFull()) return;

        rear_index++;
        arr[rear_index] = value;
        queue_size++;
    }

    int dequeue()
    {
        if(IsEmpty()) return;

        int temp = arr[front_index];
        front_index++;
        return temp;

    }

    bool IsEmpty()
    {
        return queue_size == 0;
    }

    bool IsFull()
    {
        return queue_size == 100;
    }
};
