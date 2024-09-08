#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int>&v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }

}
int main()
{
    vector<vector<int>> v;
    int N;
    cout<<"give number of inside vector"<<endl;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        int n;
        cout<<" give size of each inside vector"<<endl;
        cin>>n;
        vector<int> temp;
        for(int j=0;j<n;j++)
        {
            int x;
            cout<<"give emlemnet"<<endl;
            cin>>x;
            temp.push_back(x);
        }
        temp.clear();
        v.push_back(temp);
    }
    cout<<"the final elemnts are "<<endl;
    for(int i=0;i<v.size();i++)
    {
        printvec(v[i]);
    }
    return 0;
}