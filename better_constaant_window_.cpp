#include<bits/stdc++.h>
using namespace std;
long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        int i=0;
        int j=0;
        long sum=0;
        long maxsum=0;
        while(j<N)
        {
            sum+=Arr[j];
            if((j-i+1)==K)
            {
               maxsum=max(maxsum,sum);
               j++;
                sum-=Arr[i];
                i++;
            }
            if((j-i+1)<K)
            {
                j++;
            }
            
        }
        return maxsum;
    }
 int main()
 {}   