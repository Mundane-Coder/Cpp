//These types of problems are completley new type of BS on answers, HERE they ask to find MAX OF MIN || MIN OF MAX.
// here we had to find MAX(MIN) that means our answers would be like
//                                                                      - - - - - - - - - - X X X X X X X X X X 
//                                                                                        ^
//                                                                                        | HERE IS OUR ANSWER.                                                                   
#include<bits/stdc++.h>
using namespace std;
int anscows(vector<int> stalls, int k, int mid)
    {
        k--;
        int l=0;
        for(int i=0;i<stalls.size();i++)
        {
            if(stalls[i]-stalls[l]>=mid && k>0)
            {
                cout<<"k value for mid  "<<k<<"  "<<mid<<endl;
                k--;
                l=i;
            }
        }
        cout<<" final k "<<k<<endl;
        if(k==0)
        {
        cout<<"mid value "<<mid<<endl;    
        return mid;
        } 
        else
        return 0;
    }

    int aggressiveCows(vector<int> &stalls, int k) {

        // Write your code here
        sort(stalls.begin(), stalls.end());
        int low=1;
        int high=stalls[stalls.size()-1];
        while(low<=high)
        {
            int mid=(low+high)/2;
            cout<<"high value and mid  "<<high<<"  "<<mid<<endl;
            int ans=anscows(stalls,k,mid);
            if(ans==mid)
            low=mid+1;
            else
            high=mid-1;
        }
        int answer=anscows(stalls,k,high);
        if(answer=high) return high;
        else return -1;
        }
    int main()
    {
        vector<int> stalls={1,2,3,4,7};
        int k=3;
        int answer=aggressiveCows(stalls,k);
        cout<<answer<<endl;
        return 0;
    }