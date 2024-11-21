#include <bits/stdc++.h>
using namespace std;

 int lows(vector<int> &arr)
    {
        int mini=INT_MAX;
        for(auto it:arr)
        mini=min(mini,it);
        return mini;
    }

    int higher(vector<int> &arr)
    {
        int maxi=INT_MIN;
        for(auto it:arr)
        maxi=max(maxi,it);
        return maxi;
    }

    int flowerpossible(vector<int> &arr, int mid,int k)
    {
        int temp=0;
        int count=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]<=mid)
            {
                temp++;
            }
            else
            {
                count+=(int)floor(temp/k);
                temp=0;
            }
        }
        if(temp!=0) count+=(int)floor(temp/k);
        return count;
    }

    int minDays(vector<int>& arr, int m, int k) {
        int low=lows(arr);
        int high=higher(arr);
        if(m==1 && k==1) return low;
        while(low<=high)
        {
            int mid=(low+high)/2;
            int ans=flowerpossible(arr,mid,k);
            if(ans>=m) high=mid-1;
            else low=mid+1;
        }
        int fans=flowerpossible(arr,low,k);
        if(fans>=m) //reason why fans>=m as for this example[1,1,1,1] k=1 m=3 but actual answer we get m=4...thats why we use >=
        return low;
        return -1;
    }

int main()
{
    vector<int> arr = {1,10,3,10,2};
    int m = 3;
    int k = 1;
    int ans=minDays(arr,m,k);
    cout<<ans;
   return 0;
}