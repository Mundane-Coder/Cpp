//So basically our Search space lies betweeen [1,n] and we need to find max element or min element based on (condition)
#include<bits/stdc++.h>
using namespace std;
int main()
{
	double m; // number;
    double x; //nth root
    // double x;
    cin>>m>>x;
    double p=1e-6;
    double low=1,high=m;
    double mid=0;
    while(high-low>=p)
    {
        mid=(low+high)/2;
        if(pow(mid,x)<=m)
        low=mid;
        else high=mid;
    }
	cout<<high;
}