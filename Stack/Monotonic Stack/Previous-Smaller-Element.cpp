#include<bits/stdc++.h>
using namespace std;

vector<int> pse(vector<int> arr)
{
    stack<int> st;
    vector<int>res(arr.size());

    for(int i=0;i<arr.size();i++)
    {
        while(!st.empty() && arr[i]<st.top())
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
    vector<int> ans=pse(arr);
    for(auto it:ans) cout<<it<<"  ";
}