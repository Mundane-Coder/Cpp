#include<bits/stdc++.h>
using namespace std;
long maximumSumSubarray(int K, vector<int> &Arr , int N)
{        
        int l=0;
        int r=0;
        long sum =0;
        long maxsum=0;
        int lenght=0;
        while(r<N)
        {
            sum+=Arr[r];
            lenght=r-l+1;
            if(lenght<K)
            {
                r++;
            }
            if(lenght>K)
            {
                sum-=Arr[l];
                l++;
                lenght=r-l+1;
            }
            if(lenght==K)
            {
                maxsum=max(maxsum,sum);
                if(r!=N)
                r++;
            }
        }
        return maxsum;
}
int main()
{

}