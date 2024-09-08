#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> res;
    int n,less;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        res.push_back(x);
    }
    for(int i=0;i<n;i++)
    {
        less=i;
        for(int j=i+1;j<n;++j)
        {
            if(res[j]<res[less])
            less=j;
        }
        swap(res[less],res[i]);
    }
    for(auto it:res)
    cout<<it<<endl;
}