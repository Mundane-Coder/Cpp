#include <bits/stdc++.h>
using namespace std;
int n=5;
vector<pair<int,int>> arr(n);

void take_inputs()
{
    for(int i=0;i<n;i++)
    cin>>arr[i].first>>arr[i].second;
    
}

bool order(int a, int b)
{
    if(a>b) return false;
    return true;
}

bool order_pair(pair<int,int> a, pair<int,int> b)
{
    // if(a>b) return true;
    // return false;
    if(a.first != b.first)
    {
        if(a.first>b.first) return true;
        return false;
    }
    else
    {
        if(a.second > b.second) return true;
        return false;
    }
}
int main()
{
    take_inputs();
    // for(int i=0;i<n-1;i++)
    // {
    //     for(int j=0;j<n-i-1;j++)
    //     {
    //         if(order_pair(arr[j],arr[j+1]))
    //         swap(arr[j],arr[j+1]);
    //     }
    // }
    sort(arr.begin(),arr.end(),order_pair); //while using the order_pair function in the sort() the result is reversed cuz its ulta
    cout<<"the ordered are "<<endl; // if u want to make ascending , if we wanna swap we should  RETURN FALSE  for comparator.
    for (auto it: arr)
    cout<<it.first<<"   "<<it.second<<endl;
    return 0;
}