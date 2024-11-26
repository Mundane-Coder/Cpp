// stack implementation using LL here LL link direction is DOWN...you start from the deepest and go till the top

#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int value;
    node* next;

    node(int data) : value(data),next(nullptr) {}; 
};

class Stack
{
    private:
    int size=0;
    node* top=nullptr;
    public:

    void push(int x)
    {
        node* temp=new node(x);
        temp->next=top;
        top=temp;
        size++;
    }

    int pop()
    {
        node* temp=top;
        int poop=temp->value;
        top=top->next;
        delete temp;
        size--;
        return  poop;
    }

    int peek()
    {
        return top->value;
    }
    int sizey()
    {
        return size;
    }
};

int main()
{
    Stack s;
    s.push(0);
    s.push(1);
    s.push(2);
    s.push(4);
    s.push(5);
    cout<<s.pop();
    s.pop();
    s.pop();
    s.peek();
    return 0;
}