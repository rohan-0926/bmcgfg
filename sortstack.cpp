*** Day - 12 Sort stack without recursion

#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    stack<int>st;
    stack<int>st1;
    st.push(2);
    st.push(4);
    st.push(10);
    st.push(6);
    st.push(9);
    while(!st.empty())
    {
        int temp=st.top();
        st.pop();
        while(!st1.empty() && st1.top()>temp)
        {
           st.push(st1.top());
           st1.pop();
        }
        st1.push(temp);
    }
   while(!st1.empty())
   {
       cout<<st1.top()<<endl;
       st1.pop();
   }
//   cout<<st.size()<<endl;
    return 0;
}
