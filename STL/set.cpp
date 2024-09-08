    //REMOVE THE VALUES PART IN THE MAPS---> SET
#include<bits/stdc++.h>
using namespace std;
void print(set<string> &m)
{
    for(auto &it:m)
    cout<<it<<endl;
}
int main()
{
    set<string> s;
    s.insert("vamshi");         //log(n)   where n is the size of the set
    s.insert("cid kageno");
    s.insert("john smith"); 
    s.insert("cid kageno");      //set takes only uniuqe items just like keys in maps.repeated items wont be printed in while printing the elementns of set.
    print(s);
    auto it=s.find("vamshi");    //log(n)
    if(it!=s.end())
    s.erase(it);        //erase funtion takes both iterator or element as an input.
// so basically in coding questions they ask you to get unique elements.
}