#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> res;
    res={5,1,3,9,2};
    sort(res.begin(),res.end());
    int l=0;
    int target=8;
    int r=res.size()-1;
    while(r<res.size())
    {
        if(res[l]+res[r]==target)
        {
            cout<<"["<<l<<" "<<r<<"]"<<endl;
            break;
        }
        if(res[l]+res[r]<target)
        {
            l++;
        }
        if(res[l]+res[r]>target)
        {
            r--;
        }
    }
}