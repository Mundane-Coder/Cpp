// so basically the structure looks like this ..            [X X X X X X X X X X]
//                                                              ^          ^
//                                                            start        end
#include<bits/stdc++.h>
using namespace std;

class Queue
{
    int size=10 ,currsize=0, start=-1,end=-1;
    int q[10];

    public:

        int push(int x)
        {
            if(currsize==size) cout<<"Queue is full"<<endl;
            else if(currsize==0) {
                start=0;
                end=0;
                q[end]=x;
                currsize+=1;
            }
            else{
                end=(end+1)%size;
                q[end]=x;
                currsize+=1;
            }
            return currsize;
        }

        int  pop()
        {
            int temp=-1;
            if(currsize==0) 
            cout<<"queue is empty"<<endl;
            else if(currsize==1)
            {
                temp=q[start];
                start=-1;
                end=-1;
            }
            else 
            {
                temp=q[start];
                start=(start+1)%size;
                currsize--;
            }
            return temp;
        }

        int peek()
        {
            if(currsize==0) cout<<"no element to peek"<<endl;
            return q[start];
        }

        int sizeofqueue()
        {
            return currsize;
        }
};

int main()
{
    Queue obj;
    cout<<" n and eles"<<endl;
    int n;
    cin>>n; 
    while(n--)
    {
        int a;
        cin>>a;
        int fans=obj.push(a);
        cout<<"currsize is "<<fans<<endl;
    }
    cout<<"n for pop"<<endl;
    int p;
    cin>>p;
    while(p--)
    {
        int poop=obj.pop();
        cout<<"poped ele is "<<poop<<endl;
    }
    int peeky=obj.peek();
    cout<<"top is "<<peeky<<endl;
    peeky=obj.sizeofqueue();
    cout<<"size is "<<peeky<<endl;
    return 0;
}



