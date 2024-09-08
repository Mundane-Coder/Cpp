// Here we use only one pointer .
//second , make sum+=arr[i]
// update maxi=max(maxi,sum)
// if sum<0 ,make sum==0 then just continue.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0;
    int sum=0;
    vector<int> nums={5,4,-1,7,8};
    int maxi=nums[i]; //for vector with{-1}
    while(i<nums.size())
    {
        sum+=nums[i];
        maxi=max(maxi,sum);
        if(sum<0)
        sum=0;
        i++;
    }
    cout<<maxi;
}