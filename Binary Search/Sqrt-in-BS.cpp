//So basically our Search space lies betweeen [1,n] and we need to find max element or min element based on (condition)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x;
    cin>>x;
    double p=1e-6;
    double low=1,high=x;
    double mid=0;
    while(high-low>=p)
    {
        mid=(low+high)/2;
        if((mid*mid)<=x)
        low=mid;
        else high=mid;
        
    }
    cout<<mid;
}