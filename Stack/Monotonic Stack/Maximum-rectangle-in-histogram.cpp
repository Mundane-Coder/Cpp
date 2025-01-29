// BASICALL think how to calculate the largest rectangle, use PSE, NSE.
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

    vector<int> getnse(vector<int> &arr)
    {
        vector<int>nse(arr.size(),-1);
        unordered_map<int,int> mpp;
        // int k=0;
        // for(auto it:arr)
        // {
        //     mpp[it]=k++;
        // }
        stack<int> st;
        for(int i=arr.size()-1;i>=0;i--)
        {
            mpp[arr[i]]=i;
            while(!st.empty() && arr[i]<=st.top())
            st.pop();
            if(st.empty())
            st.push(arr[i]);
            else
            {
                nse[i]=mpp[st.top()];
                st.push(arr[i]);
            }

        }
        return nse;

    }
    vector<int> getpse(vector<int>&arr)
    {
        vector<int>pse(arr.size(),-1);
        unordered_map<int,int> mpp;
        // int k=0;
        // for(auto it:arr)
        // mpp[it]=k++;
        stack<int>st;
        for(int i=0;i<arr.size();i++)
        {
            mpp[arr[i]]=i;
            while(!st.empty() && arr[i]<=st.top())
            st.pop();
            if(st.empty())
            st.push(arr[i]);
            else
            {
                pse[i]=mpp[st.top()];
                st.push(arr[i]);
            }
        }
        return pse;
    }
    int largestRectangleArea(vector<int>& arr) {
        int n=arr.size();
        int maxi=INT_MIN;
        vector<int> nse=getnse(arr);
        vector<int>pse=getpse(arr);
        for(int i=0;i<n;i++)
        {
            if(nse[i]==-1 && pse[i]==-1)
            {
                maxi=max(maxi,(i+1)*arr[i]+(n-1-i)*arr[i]);
            }
            else if(pse[i]==-1 && nse[i]!=-1)
            {
                maxi=max(maxi,(i*arr[i])+(nse[i]-i)*arr[i]);
            }
            else if (pse[i]!=-1 && nse[i]==-1)
            {
                maxi=max(maxi,(i-pse[i])*arr[i]+(n-1-i)*arr[i]);
            }
            else
            {
                int k=(i-pse[i])*arr[i]+(nse[i]-i-1)*arr[i];
                cout<<k<<"  "<<pse[i]<<endl;
                maxi=max(maxi,(i-pse[i])*arr[i]+(nse[i]-i-1)*arr[i]);
            }
        }
        return maxi;
    }
};

int main()
{
    vector<int> input;
    cout<<"give elements"<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        input.push_back(temp);
    }
    int answer=largestRectangleArea(input);
    
}