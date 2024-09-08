#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
int res[N];
int res2[N];
int main()
{
    // vector<int> res;
    int q,size;
    cout<<"test cases ?"<<endl;
    cin>>q;
    cout<<"give size of the array"<<endl;
    cin>>size;
    while(q--)
    {
        int l,r,element;
        cout<<"give left and right ranges and the insering element"<<endl;  //--------------->BRUTE FORCE
        cin>>l>>r>>element;
        // for(int i=l;i<=r;i++)
        // {
        //     res[i]=res[i]+element;
        // }
            res[l]+=element;
            res[r+1]-=element;
        }
        for(int i=1;i<size;i++)
        {
            res[i]=res[i]+res[i-1];
        }
    int k=0;
    for(int i=0;i<=size;i++)
    {
        cout<<res[i]<<"\t";
        k=max(k,res[i]);
    }
    cout<<endl<<"the larget element is "<<k;
  
    
      
}