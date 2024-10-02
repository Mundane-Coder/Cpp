#include <bits/stdc++.h>
using namespace std;
int main()
{
    int Arr[5]={10 , 2, -2, -20, 10};
    int N=5;
    int k=10;
    int sum = 0, curr = 0;
    unordered_map<int, int> mpp;
    for (int i = 0; i < N; i++)
    {
        sum += Arr[i];
        if (sum == k)
            curr++;
        if (mpp.find(sum - k) != mpp.end())
        {
            curr += mpp[sum - k];
        }
        mpp[sum]++;          //THERE REASON WHY IN PROBLEMS LIKE "find the number subarrays ..." WE USE MPP[X]++, IS BECAUSE...IF BOTH THE COMPLEMENTARY ELEMENT EXITS THEN THE NUMBER OF SUBARAY POSSIBLE WOULD BE THE MAXIMUM NUMBER OF THE EITHER OF THE ELEMENT EXITS.
    }                       // FOR EXAMPLE [D,G,A,C,J,K,A,V,B] imagine A and B are the complementary elemebt in a prefix sum array. then there is 2 subarray of AB possible which is nothing but higest frequnecy of either of the complementary element  
    cout<< curr;
    }