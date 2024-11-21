#include<bits/stdc++.h>
using namespace std;
int find(vector<int> &nums, int target)
{
    // the basic idea is to...
    // 1} identify the sorted BS-searchable part.
    // 2} then in the sorted part "LEFT HALF"--------> just take minimum element is nums[low]. "RIGHT HALF"-------> just  take the minimum element is nums[mid]

    int low=0;
    int high=nums.size()-1;
    int mini=INT_MAX;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(nums[low]<=nums[mid])                // the reason why we have used <= is because for arrays having 2 elements and low,mid are on first element
        {
            mini=min(mini,nums[low]);
            low=mid+1;
        }
        else
        {
            mini=min(mini,nums[mid]);
            high=mid-1;
        }
    }
    return mini;
}
int main()
{
    vector<int> arr;
    int n;
    int x;
    cout<<"give value of n "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    } 
    int target;
    cout<<"give target eleemt"<<endl;
    cin>> target;
    
    
    int ans=find(arr,target);
    cout<<ans;
}