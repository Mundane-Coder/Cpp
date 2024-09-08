//stl question,luv c++
#include<bits/stdc++.h>
using namespace std;
void myanswer(vector<int> res)
{
    // vector<int> res;
    // res={2,1,7,4,2};
    int k=3;
    int x;
    int sum=0;
    while(k--)
    {
    sum+=*max_element(res.begin(),res.end());
    x=*max_element(res.begin(),res.end())/2;
    res.erase(max_element(res.begin(),res.end()));
    cout<<"this is x"<<x<<endl;
    res.push_back(x);
    }
    cout<<"the max is: "<<sum;
}
void luvanswer(multiset<int> &ms,int k)
{
        // int k;
        // cin>>k;
        int x;
        int sum=0;
        while(k--)
        {
            auto it=ms.end();
            it--;
            // or auto it=(--ms.end());
            sum+=*it;
            x=*it/2;
            ms.erase(*it);
            ms.insert(x);
        }
        cout<<sum;
}
int main()
{
    multiset<int> ms={2,1,7,4,2};
    luvanswer(ms,3);
}