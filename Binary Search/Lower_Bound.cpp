// so lower bound means the "SMALLEST INDEX " whose element in the array is GREATER THAN OR EQUAL to a given target .
// so upper bound means the "SMALLEST INDEX" whose element in the array is "GREATER" to a given target
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
        if(res[mid]>=k)
        {
            int ans=mid;
            high=mid-1;
        }
        else
        low=mid+1;
    }
    cout<<"the index is "<<ans;
}

//instead of writting this big of a code we can just write 
//  auto lb =lower_bound(res.begin(), res.end(),target)- res.begin();
//  auto up=upper_bound(res.begin(), res.end(),target)- res.begin();