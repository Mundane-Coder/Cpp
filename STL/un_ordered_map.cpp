// MAIN DIFF BITW MAPS AND UNORDERD MAPS ARE THAT
//1.INBUILT IMPLEMENTATION
//2.TIME COMPLEXITIY
//3.VALID KEYS DATATYPE 

#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int,string> map;              //CANT TAKE COMPLEX ,NESTED CONATAINERS
    map[1]="vamshi";                            // 0(1)
    map[8]="jfhaeifh";                          //UNORDERD MAPS UES HAST TABLES(THEY CREATE HASH OF EVERY ELEMENT), MAPS USES TREES(WORKS ON COMPARING KEY,VALUE OF EACH OTHER  ), THAT IS WHY THE OUTPUT ARE NOT IN ORDER
    map[6]="asdawcwc";
    map.insert({2,"power"});
    for(auto it:map)
    {
        cout<<it.first<<"  "<<it.second<<endl;
    }
    auto itp=map.find(6);
    if(itp!=map.end())
    {
        map.erase(itp);                            //0(1)
    }
    for(auto it:map)
    {
        cout<<it.first<<"  "<<it.second<<endl;
    }
    
}