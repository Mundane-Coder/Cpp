#include<bits/stdc++.h>//    THE INTUTIION IS THAT WE NEED TO ARRAGE THE MONOTONIC STACK IN DECREASING ORDER AND SCAN THE GIVERN VECTOR IN THE DECREASING ORDER
using namespace std;/// ASSUSME THIS LIGHT POLE SCENARIO (PERSON)<-----> LIGHT POLE(2) LIGHTPOLE(3) LIGHTPOLE(4)
                    // SEE THE YT VEDIO
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mpp;
        stack<int> st;
        vector<int> ans;
        for(int i=0;i<nums1.size();i++)
        mpp[nums1[i]]=i;
        for(int i=nums2.size()-1;i>=0;i--)
        {
            if(st.empty())
            {
                if(mpp.find(nums2[i])!=mpp.end())
                {
                    mpp[nums2[i]]=-1;
                }
                    st.push(nums2[i]);
            }
            else if(!st.empty() && nums2[i]<st.top())
            {
                if(mpp.find(nums2[i])!=mpp.end())
                {
                    mpp[nums2[i]]=st.top();
                }
                st.push(nums2[i]);
            }
            else
            {
                while(!st.empty() && nums2[i]>st.top())
                {
                    st.pop();
                }
                if(!st.empty() && mpp.find(nums2[i])!=mpp.end())
                mpp[nums2[i]]=st.top();
                else if(st.empty() && mpp.find(nums2[i])!=mpp.end())
                mpp[nums2[i]]=-1;
                st.push(nums2[i]);
            }
        }
        for(int i=0;i<nums1.size();i++)
        {
            if(mpp.find(nums1[i])!=mpp.end())
            ans.push_back(mpp[nums1[i]]);
        }
        return ans;
    }
};

int main()
{
    Solution sol;           //TC 0(2N) SP 0(3N)
    vector<int> res;
    vector<int>nums1={0,1,0,2,1,0,1,3,2,1,2,1};
    vector<int>nums2={0,1,0,2,1,0,1,3,2,1,2,1};
    res=sol.nextGreaterElement(nums1,nums2);
    for(auto it:res) cout<<it<<" ";
    return 0;
}