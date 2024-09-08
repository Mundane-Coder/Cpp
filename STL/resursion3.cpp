#include<bits/stdc++.h>
using namespace std;
int sum(int n,vector<int> &res)
{
    if(n==0)
    return 0;                               //BASICALLY IN RECURSION TRY TO WRITE THE FUNCTION SOLOTION ALONG WITH THE FUNCTION IT SELF
    else
    return sum(n-1,res)+res[n-1];              //DEFINE A FUNCTION AND BRING A RELATION ALONG WITH THE FUNCTION ITSELF
}
int digit_sum(int n)
{
    if(n==0)
    return 0;
    else
    return digit_sum(n/10)+n%10;
}
int main()
{
    vector<int> res;
    int n,ans;
    cin>>n;
    // for(int i=0;i<n;i++)
    // {
    //     int x;
    //     cin>>x;
    //     res.push_back(x);
    // }
    ans=digit_sum(n);
    cout<<ans;
}