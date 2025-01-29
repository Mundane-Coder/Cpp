#include<bits/stdc++.h>
using namespace std;

vector<int> nse(vector<int> arr)
{
    int n=arr.size();
    stack<int>st;
    vector<int> res(n);
    for(int i=n-1;i>=0;i--)
    {
        while(!st.empty() && arr[i]>st.top())
        st.pop();
        if(st.empty()) res[i]=-1;
        else res[i]=st.top();
        st.push(arr[i]);
    }
    return res;
}

int main()
{
    vector<int> arr={5,7,4,10,11,7};
    vector<int> ans=nse(arr);
    for(auto it:ans)
    cout<<it<<"  ";
    return 0;
}