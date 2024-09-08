#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    vector<int> p;
    v={7,2,3,4,5};
    p={5,4,3,2,6};
    vector<int> ::iterator it;
    it=v.begin();
    // for(int i=0; i<v.size();i++)
    // cout<<*(it+i)<<endl;
    for(it=v.begin();it!=v.end();++it)
    cout<<*it<<endl;
    cout<<"now"<<endl;
    for(auto it:v)
    cout<<it<<endl;
    return 0;
}