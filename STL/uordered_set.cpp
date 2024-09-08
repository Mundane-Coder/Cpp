//Same as that of set but has no order. diffrence between set and unordered_set is same as that of the diffrence between map and unordered_map
//TC 0(1)

//WRITE A PROGRAM TO VALIDATE STRING EXITENCE
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<string> s;
    int q;
    string str;
    cin>>q;
    while(q--)
    {
        cin>>str;
        s.insert(str);
    }
    cout<<"give number of strings to check\n";
    int lenght;
    cin>>lenght;
    string name; 
    while(lenght--)
    {
        cin>>name;
        auto it=s.find(name); // takes input both iterator or as an element
        if(it!=s.end())
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;
    }
}