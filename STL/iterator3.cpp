#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int>v={5,6,4,2,3};
    // for(int i:v)            //HERE THE VARIABLE I SHOULD HAVE THE SAME DATA TYPE AS THAT OF THE CONTAINER AND THE VARIABLE I COPIES THE ELEMENTS IN THE CONATINER. IT IS NOT PASSED AS A REFRENCE.
    // cout<<i<<endl;
    // vector<string> b={"vamshi v","Keerthi L"};
    // for(string g:b)         //HERE THE DATATYPE OF THE G IS STRING AS THE DATATYPE OF THE CONTAINER IS STRING 
    // cout<<g<<endl;
    vector<pair<int,string>>v_p={{1,"vamshi v"},{2,"Keerthi L"}};
    for(auto value: v_p)            //SO BASICALLY COPY WHAT IT HAS INSIDE THE CONTAINER EX: CONTAINER<----->  
    cout<<value.first<<"  "<<value.second<<endl;    //OR BETTER, JUST REPLACE IT WITH AUTO KEYBOARD..BRUH 

}