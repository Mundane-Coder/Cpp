#include<bits/stdc++.h> // OKAY SO THIS IS MORE LIKE CREATING A MONOTONIC STACK BASED ON THE OBSERVATION ON HOW THE ASTEROIDS COLLIDE. 
using namespace std;    // THIS IS 90% SIMILAR TO FINDING PSE OR NSE..JUST SEE HOE TO THE MONOTONIC STACK NNEDS TO BE CREATED
                        // (+VE,-VE)---> NO COLLISION    (-VE,+VE)---> COLLISION.
                        // FIRST USE WHILE LOOP, FOLLOWED BY THE IF CONDITION, SEE NSE AND PSE FROM CHATGPT IT HAS A GOOD CODE. UNDERSTAND ACCORDINDLY
     vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for(auto it: asteroids)
        {
        int temp=0,flag=0;
        while(!st.empty() && it<0 && st.top()>0)
        {
            if(abs(it)>abs(st.top()))
            {
                // temp=st.top();
                st.pop();
            }
            else if(abs(it)==abs(st.top()))
            {
                temp=st.top();
                st.pop();
                break;
            }
            else
            {
            flag=1;
            break;
            }
        }
        if(abs(temp)==abs(it) && temp>0 && it<0  || flag==1)
        continue;
        else
        st.push(it);
        }
        vector<int> ans(st.size());
        {
            for(int i=st.size()-1;i>=0;i--)
            {
                int temp=st.top();
                ans[i]=temp;
                if(!st.empty())st.pop();
            }
        }
        return ans;
    }

int main()
{
    vector<int> input;
    int n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        input.push_back(x);
    }
    vector<int> ans=asteroidCollision(input);
    for(auto it: ans)
    cout<<it<<" ";
    return 0;
}