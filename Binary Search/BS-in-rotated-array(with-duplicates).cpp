#include<bits/stdc++.h>
using namespace std;
int find(vector<int> &nums, int target)
{
    //  the main diffrence between one with unique element and duplicates element is that, due to arrays like this 
    //  [3,1,2,3,3,3,3] you see, arr[mid]=3, and so does arr[low] and arr[high].. so in this cases we cant "IDENTITY THE WHICH IS THE BINARY SEARCHABLE PART"
    //   due tot this we get wrong answer..
    // so basically the problem here is that arr[low]==arr[mid]==arr[high]... because of this we cant identify the BS searchable part.
    // so lets use this as an advantage and trim of the "SEARCH SPACE". 

        int low=0;
        int high=nums.size()-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]==target) return 1;
            if(nums[low]==nums[mid] &&nums[mid]==nums[high])
            {
                low++;
                high--;
                continue;           // used continue here for 2 reasons. 1) to make sure "low > high". 2) we can reduce the number of steps of process by trimming of such cases in start.
            }
            if(nums[low]<=nums[mid])
            {
                if(nums[low]<=target && nums[mid]>=target)
                {
                    high=mid-1;
                }
                else
                low= mid+1;
            }
            else
            {
                if(nums[mid]<=target && target<=nums[high])
                {
                    low=mid+1;
                }
                else 
                high= mid-1;
            }
            
        }
        return 0;

}
 int main()
{
    vector<int> nums;
    int n;
    int x;
    cout<<"give value of n "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        nums.push_back(temp);
    } 
    int target;
    cout<<"give target eleemt"<<endl;
    cin>> target;
    
    
    int ans=find(nums,target);
    cout<<ans;
}