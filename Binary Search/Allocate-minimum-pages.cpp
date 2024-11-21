//These types of problems are completley new type of BS on answers, HERE they ask to find MAX OF MIN || MIN OF MAX.
// here we had to find MAX(MIN) that means our answers would be like
//                                                                      X X X X X X X X X - - - - - - -
//                                                                                        ^
//                                                                                        | HERE IS OUR ANSWER.  
#include<bits/stdc++.h>
using namespace std;

int tat(vector<int> &arr)
    {
        int ct=0 ;
        for(auto it:arr)
        ct+=it;
    return ct;
    }
  
    int pageans(vector<int> & arr, int mid)
    {
        int count=0;
        int temp=0;
        for(int i=0;i<arr.size();i++)
        {
            temp+=arr[i];

            if(temp>mid)
            {
            count++;
            temp=arr[i];
            }
        }
        count++;
        cout<<"mid , count and k  "<<mid<<"  "<<count<<"  3"<<endl;
        return count;
    }
    
    int findPages(vector<int> &arr, int k) {
        // code here
        if(k>arr.size()) return -1;
        sort(arr.begin(),arr.end());
        int low=arr[arr.size()-1];
        int high=tat(arr);
        while(low<=high)
        {
            int mid=(low+high)/2;
            cout<<"low and high are "<<low<<" "<<high<<endl;
            int ans=pageans(arr,mid);
            if(ans<=k) high=mid-1;          // sicnce ans<=k we change high...thats means our ans is low... where there is <= that would loose its correct ans.
            else
            low=mid+1;
        }
        // int fans=pageans(arr,low);
        return low;
        //if(fans==k) return low; // apprently fans <=k not always k....not sure/ understanding why...
        return -1;
    }

    int main()
    {
        vector<int> arr={15,10,19,10,5,18,7};
        int k=5;
        int answer=findPages(arr,k);
        cout<<answer<<endl;
        return 0;
    }