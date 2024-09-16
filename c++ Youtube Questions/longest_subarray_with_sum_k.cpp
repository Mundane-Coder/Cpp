#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A[17]={-13,0,6,15,16,2,15,-12,17,-16,0,-3,19,-3,2,-9,-6};
    int N=17 ;
    int K=15;
    unordered_map<int,int> mpp;
        int z=0;
        int v=0;
        int c=0;
        int ans=0;
        for(int i=0;i<N;i++)
        {
           c+=A[i];
           z=c-K;
           if(c==K)
           cout<<i<<"   "<<"from c"<<endl;
           if(mpp.find(z)!=mpp.end())
           {
               v=i-mpp[z];
               ans=max(ans,v);
           }
           if(mpp[c]<1)
           mpp[c]=i;
        }
        cout<<ans<<"    "<<"from ans";
        //17 15
// -13 0 6 15 16 2 15 -12 17 -16 0 -3 19 -3 2 -9 -6
}