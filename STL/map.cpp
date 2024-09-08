//FIRST OF ALL, MAPS ARE NOT CONTIGIOUS MEMORY ALLOCATOR LIKE ARRAYS AND VECTORS
#include<bits/stdc++.h>
using namespace std;
void caller(map<int,string> &m)
{
    cout<<m.size()<<endl;                       // IN MAPS THE KEYS ARE IN ORDERD FORMAT.IF INT IS THE DT OF KEY.ASCENDING ORDER OF KEY ARE OUTPUTTED.ID STRINGS ARE THE KEYS THEN THEY ARE ARRANGED IN LEXOGRAPHICAL ORDER(JUST LIKE IN DICTIONARIES) 
    for(auto value : m)    //THE TIME COMPLEXITY FOR INSERTING AND ACESSING ELEMENTS UNDER A LOOP IS O(nlogN) SAME FOR USING AUTO I:V METHOD TOO
    {
       cout<<value.first<<"  "<<value.second<<endl;
    }
}
int main()
{
    map<int,string> m;
    m[3]="vamshi v";        //O(logn) ---->insertion without using rhe loop
    m[9]="Keerthi l";       //all key values are unique,no repetition of key allowed, incase done updates the corresponding key's value.NOTE ,ONLY IN CASE OF m[x]=y-----> it does not work for insert
    m[2]="suchit";
    // m.insert({9,"JEEVISHA B"});
    m[9]="jeevisha b";
    auto it=m.find(9);  //--------------------------------------------------------------------->> IF THE ELEMENT IS NOT THERE IN THE MAPIT RETURN MAP.END()
    if(it==m.end())         //O(logn)           // return type---> return an iterator.
    cout<<"the element doees not exit"<<endl;        
    caller(m);
    m.erase(it);            //TAKES ITERATOR AS INPUT. ERASES THE ENTIRE KEY,VALUE PAIR.
    caller(m);
   
    
}