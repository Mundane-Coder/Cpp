#include<bits/stdc++.h>
using namespace std;
void func(int n)
{
    if(n==0)
    return ;
    cout<<n<<endl;                    //STATEMENTS ABOVE THE FUCTION CALL EXECUTES FROM FIRST CALL TO LAST CALL
    func(n-1);
    cout<<n<<endl;                    //SATEMENT BELOW THE CODE EXECUTES AFTER THE LAST CALL,FROM LAST CALL TO FIRST CALL
}
int main()
{
    func(5);
}