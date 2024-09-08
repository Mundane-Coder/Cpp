// used store the duplicate items also(non-uniuqe) and in lexographical order(it follows red-black trees).
//time complexity 0(log(n))
#include<bits/stdc++.h>
using namespace std;
void print(multiset<string> &ms)
{
    for(auto itp:ms)
    cout<<itp<<endl;
}
int main()
{
    multiset<string> ms;
    // int q;
    // cin>>q;
    // while(q--)
    // {
    //     string str;
    //     cin>>str;
    //     ms.insert(str);
    // }
    // cout<<"the element are"<<endl;
    ms.insert("vamshi");        //log(n)
    ms.insert("vamshi");        //log(n)
    ms.insert("shadow");
  /*log(n)*/  auto it=ms.find("vamshi");  //even thought there are 2 element(vamshi) it return  an iterator wiht the first occuring element 
    if(it!=ms.end())      //HERE I PASSED AN ITERATOR OF "VAMSHI". IF I PASSED THE ELMENT "VAMSHI" THEN IT WILL REMOVE ALL THR DUPLICATE ELEMENT AS WELL.
    ms.erase(it);       //better way to delete items in the set, since it doens't delete the duplicates.
  /*log(n)*/  ms.erase("vamshi");     // now only shadow is remained.    
    print(ms);
}