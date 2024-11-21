//  Whenever there is a possible range of answers then we can apply binary search..
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr={3,6,7,11};
    int k=8;
    sort(arr.begin(),arr.end());
        int low=1;
        int high=arr[arr.size()-1];
        int count=0; 
        int maxi=INT_MAX;
        while(low<=high)
        {
            int mid=(low+high)/2;
            for(int &it:arr)
            {
                if(it%mid != 0)
                count+=((it/mid)+1);
                else
                count+=(it/mid);
            }
            if(count<=k)
            {
            cout<<"the count and mid are "<<count<<" "<<mid<<endl;
            high=mid-1;
            maxi=min(maxi,mid);
            }
            else if(count>k)
            {
            low=mid+1;
            cout<<"the count and mid are "<<count<<" "<<mid<<endl;
            }
            count=0;
        }
        cout<< maxi;
}