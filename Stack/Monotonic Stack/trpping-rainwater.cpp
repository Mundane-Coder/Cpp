#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {4, 2, 0, 3, 2, 5};
    int ans = 0;
    vector<int> suffixsum(a.size());
    suffixsum[a.size()-1]=a[a.size()-1];        //suffixmax from backwards up till  the current index gives the max element.  
    for (int i = a.size() - 2; i >= 0; i--)     //similarly prefixmax , from the frontwards direction till the current index gives the max element 
        suffixsum[i] = max(suffixsum[i + 1], a[i]);
    int maxi = INT_MIN;
    for (int i = 0; i < a.size(); i++)
    {
        maxi = max(a[i], maxi);
        if (a[i] < maxi && a[i] < suffixsum[i]){
            ans += min(maxi, suffixsum[i]) - a[i];      //think of the logic urself once
            cout<<" "<<ans<<endl;
        }
    }
    return ans;
}