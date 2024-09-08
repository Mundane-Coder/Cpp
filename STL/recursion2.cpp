#include<bits/stdc++.h>
using namespace std;
int func(int n)
{
    if(n==0)
    return 1;
    int num=func(n-1)*n;
    return num;
}
int main()
{
    int n,m;
    cin>>n;
    m=func(n);
    cout<<m;
}