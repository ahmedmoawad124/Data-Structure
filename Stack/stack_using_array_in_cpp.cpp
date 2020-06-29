// Author: Ahmed Moawad
// Date: June 29, 2020

#include<iostream>
using namespace std;
struct Stack
{
    int arr[100];
    int top_index = -1;

    void push(int value)
    {
        if(top_index == 99) 
        {
            cout<<"The Stack is Full"<<endl;
            return;
        }
        top_index++;
        arr[top_index] = value;
    }

    // Return the top value and remove it from our Stack
    int pop()
    {
        if(top_index == -1)
        {
            cout<<"The Stack is empty"<<endl;
            return 404;     // Error 
        }
        int poped_val = arr[top_index];
        top_index--;
        return poped_val;
    }

    // Just Return the top value 
    int top()
    {
        if(top_index == -1)
        {
            cout<<"The Stack is empty"<<endl;
            return 404;     // Error 
        }

        return arr[top_index];
    }

    int size()
    {
        return top_index + 1;
    }

    bool IsEmpty()
    {
        return !(top_index == -1);
    }

};


int main(void)
{
    Stack S;
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
