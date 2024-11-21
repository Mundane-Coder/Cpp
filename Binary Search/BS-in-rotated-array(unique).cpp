#include<bits/stdc++.h>
using namespace std;
int find(vector<int> &arr, int target)
    {
    // MAIN IDEA IS THAT-----> you identify the binary searchable part and non-binary searchable part.
    //                         THIS IS DONE BY COMPARING THE ELEMENT IN MID POSITION WITH THAT OF LOW POSITION.
    //                         After identify the BS searchable part, we see if the target is inside that BS searable part.
    //                         if its there, then you will change the low,high pointer accordingly. 
    //                         if its not there you again change the low, high poiner accordingly. 
    int low=0;
        int high=arr.size()-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(arr[mid]==target) return mid;
            if(arr[low]<=arr[mid])
            {
                if(arr[low]<=target && target<=arr[mid])
                {
                    high=mid-1;
                }
                else 
                low=mid+1;
            }
            else
            {
               if(arr[mid]<=target && target<=arr[high])
               {
                   low=mid+1;
               }
               else
               high=mid-1;
            }
        }
        return -1;
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
