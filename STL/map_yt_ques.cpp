#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> map;
    int n;
    cout<<"give the number of elemental pairs"<<endl;
    cin>> n;
    string element;
    int frequency;
    for(int i=1;i<=n;i++)
    {
        cin>>element;
        map[element]=map[element]+1;
    }
    for(auto it:map)
    {
        cout<<it.first<<"\t"<<it.second<<endl;
    }
}