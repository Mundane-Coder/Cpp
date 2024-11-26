#include<bits/stdc++.h>
using namespace std;

class stack_implement
{
    int top=-1;
    int stack[10];
    public:

        void push(int a)
        {
            if(top==9) cout<<"stack overflow"<<endl;
            else 
            {
                top++;
                stack[top]=a;
            }
        }
        void pop()
        {
            if(top==-1) cout<<"stack underflow"<<endl;
            else top--;
        }
        void peek()
        {
            if(top==-1) cout<<"stack is empty"<<endl;
            else
            cout<<stack[top]<<endl;
        }
};

int main()
{
    stack_implement obj;
    cout<<" n and eles"<<endl;
    int n;
    cin>>n; 
    while(n--)
    {
        int a;
        cin>>a;
        obj.push(a);
    }
    cout<<"n for pop"<<endl;
    int p;
    cin>>p;
    while(p--)
    {
        obj.pop();
    }
    return 0;
}