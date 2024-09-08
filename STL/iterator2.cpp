#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int,int>> v_p={{2,3},{7,9},{10,65},{45,78}};
    vector<pair<int,int>> :: iterator it;
    for(it=v_p.begin();it!=v_p.end();++it)
    {
    // cout<<(*it).first<<"  "<<(*it).second<<endl;
    cout<<(it->first)<<" "<<it->second<<endl;
    }
    return 0;
}