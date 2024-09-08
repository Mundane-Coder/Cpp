//SINCE IN THIS QUESTIN WE HAD TO RETURN ALL THE SUBARRAY,WE HAD TO USE INSIDE WHILE LOOP.
//IF THEY HAD ASKED THE LENGHT OF THE LONGEST SUBARRAY WE CAN JUST KEEP,IF COND INSTEAD OF INNER WHILE.
// SEE TAKE U FORWARD 1ST VEDIO OF 2POINTER AND SLIDING WINDOW.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> res;
    res={2,5,1,7,10};
    int k=14;
    int l=0;
    int r=0;
    int sum=res[l];
    int maxlenght=0;
    int lenght=0;
    //SO TYPICALLY U WILL HAVE L,R,MAXLENGHT=0, IN MAJORITY OF THE TEMPLATE. SUM MIGHT VARY ACCORDINGLY TO THE QUESTION
    while(r<res.size())
    {
        // sum+=res[r];
        if(sum<=k)
        {
            //IF THEY ARE ASKING FOR SUBARRAY, THIS IS WHERE YOU STORE INDEXES.
        lenght=r-l+1;
        r++;
        maxlenght=max(maxlenght,lenght);
        }
        if(sum>k) // for question asking the subarray, use while. for question asking lenght of the longest subarray use if condition.
        {
            sum-=res[l];
            l++; 
        }
        sum+=res[r];
    }
    cout<<"the longest subarray's lenght is: "<<maxlenght<<endl;
}

//THE TIME COMPLEXITY OF VARIABLE SLIDING WINDOW IS O(2N).BECAUSE BOTH L AND R SIMULATNEOUSLY ,AT WORST CASE SENARIO,TRAVERS N TIMES.