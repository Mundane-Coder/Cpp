#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> res;
    int n;
    int ans;
    cout<<"give value of n"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        res.push_back(temp);
    }
    int k=0;
    cout<<"give the target element"<<endl;
    cin>>k;
    int low=0;
    int high=n-1;
    while(low<=high)
    {
         int mid=(low+high)/2;
         if(res[mid]==k) ans=mid;
         if(k<res[mid]) high=mid-1;
         else low=mid+1;
    }
    cout<<"the index is "<<ans;
}