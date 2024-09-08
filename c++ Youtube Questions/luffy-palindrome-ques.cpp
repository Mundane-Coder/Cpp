#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> arrow;
    int q,count=0;
    cout<<"number of cases?"<<endl;
    cin>>q;
    string word;
    cout<<"give word"<<endl;
    cin>>word;
    while(q--)
    {
        string f;
        int l,r;
        cout<<"give the left and right ranges"<<endl;
        cin>>l>>r;
        for(int i=l-1;i<r;i++)
        {
            f=word.at(i);
            arrow[f]+=1;
        }
        for(auto it:arrow)
        {
            if(it.second%2==1)
            count+=1;
        }
        if(count==0||count==1)
        cout<<"1";
        else 
        cout<<"0";
        
    }
        
        
    
    }