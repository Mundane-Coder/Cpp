//These types of problems are completley new type of BS on answers, HERE they ask to find MAX OF MIN || MIN OF MAX.
// here we had to find MAX(MIN) that means our answers would be like
//                                                                      - - - - - - - - - - X X X X X X X X X X 
//                                                                                        ^
//                                                                                        | HERE IS OUR ANSWER.                                                                   
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int possible(vector<int> &nums, int mid){
        int k=0, i=0, next=0;
        while(i < nums.size()){
            if(nums[i] >= next){
                k++;
                next=nums[i] + mid;
            }
            i++;
        }
        return k;
    }
    int aggressiveCows(vector<int> &stalls, int k) {
        sort(stalls.begin(), stalls.end());
        int low=0, high=stalls.back() - stalls.front();
        while(low <= high){
            int mid=(low+high)/2;
            int val = possible(stalls, mid);
            if(val <  k)
                high=mid-1;
            else
                low=mid+1;
        }
        return high;
    }
};
    int main()
    {
        vector<int> stalls={1,2,3,4,7};
        int k=3;
        int answer=aggressiveCows(stalls,k);
        cout<<answer<<endl;
        return 0;
    }
