#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int> &v)
{
    for(int g=0;g<v.size();g++)
    {
        cout<<v.at(g)<<endl;
    }
}

int main()
{
    vector<int> v;
    int n,x;
    cout<<"no of elements"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
    cin>>x;
    v.push_back(x);
    }
    printvec(v);
    return 0;
}