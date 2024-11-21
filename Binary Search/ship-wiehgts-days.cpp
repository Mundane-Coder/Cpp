#include<bits/stdc++.h>
using namespace std;
 int findmax(int arr[],int n)
  {
      int maxi=0;
      for(int i=0;i<n;i++)
      {
          maxi=max(maxi,arr[i]);
      }
      return maxi;
  }
  int findsum(int arr[],int n)
  {
      int sum=0;
      for(int i=0;i<n;i++)
      {
          sum+=arr[i];
      }
      return sum;
  }
    int main() {
        // code here
        int arr[]={17,20,2,17,10,4,20,15,1,3,9,15};
        int n=12;
        int d=12;
        int ans=0;
        int low=findmax(arr,n);
        int high=findsum(arr,n);
        while(low<=high)
        {
            int mid=(low+high)/2;
            ans=mid;
            int days=1;
            int tload=0;
            for(int i=0;i<n;i++)
            {
                tload+=arr[i]; 
                if(tload>mid)
                {
                    days++;
                    tload=arr[i];
                }
            }
            cout<<"BEFORE:: the low, high, mid and days "<<low<<" "<<high<<" "<<mid<<" "<<days<<endl;
            if(days<=d)
            {
                high=mid-1;
            }
            else
            low=mid+1;
            cout<<"AFTERJ:: the low, high, mid and days "<<low<<" "<<high<<" "<<mid<<" "<<days<<endl;
        } 
        cout<< low<<endl;
    }