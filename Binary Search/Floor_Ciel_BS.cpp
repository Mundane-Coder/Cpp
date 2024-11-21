#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Floor is the largest element which is <= target
    //Ciel is the smallest element which is >=target.....................SIMILAR TO LOWER_BOUND
    
    //----------------->"target"<-------------------
    //  Floor---------->"tsrget"<---------Ciel
    vector<int> a;
    int n;
    int x;
    cout<<"give value of n "<<"ans target value too"<<endl;
    cin>>n>>x;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        a.push_back(temp);
    }          //target
    int low=0;
	int high=n-1;
	int ciel=-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(a[mid]>=x)                       //this is LOWER BOUND for finding the ciel
		{
			ciel=a[mid];
			high=mid-1;
		}
		else low=mid+1;
	}
	int floor=-1;
	low=0,high=n-1;
	int mid1=0;
	while(low<=high)
	{
		mid1=(low+high)/2;
		if(a[mid1]<=x)                      //this is to find the floor
		{
			floor=a[mid1];
			low=mid1+1;
		}
		else high=mid1-1;
	}
	cout<<floor<<"  "<<ciel<<endl;
}