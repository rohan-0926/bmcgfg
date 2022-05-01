*** Day - 9 Backspace String Compare
    Link - https://leetcode.com/problems/backspace-string-compare/
    



#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
#define F first
#define S second
#define PB push_back
#define MP make_pair
const ll mod = 1e9+7, N = 2e6+7, M = 2e6+7, INF = INT_MAX/10;
int dirx[]={-1,-1,0,1,1,1,0,-1};
int diry[]={0,1,1,1,0,-1,-1,-1};
int top=0;

void solve()
{
    string s,t;cin>>s>>t;
    stack<char>st;
        stack<char>st1;
        for(int i=0;i<s.size();i++)
        {
            char top=st.empty() ? '*' :st.top();
            if((top>='a' && top<='z')&&(s[i]=='#'))
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
        for(int i=0;i<t.size();i++)
        {
            char top=st1.empty() ? '*' : st1.top();
            if((top>='a' && top<='z')&&(t[i]=='#'))
            {
                st1.pop();
            }
            else
            {
                st1.push(t[i]);
            }
        }
        string s1="",s2="";
        set<char>set;
        while(!st.empty())
        {
            s1+=st.top();
            // cout<<st.top();
            set.insert(st.top());
            st.pop();
        }
        // cout<<endl;
        while(!st1.empty())
        {
            s2+=st1.top();
            // cout<<st1.top();
            set.insert(st1.top());
            st1.pop();
        }
        string l="",m="";
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]>='a' && s1[i]<='z')
            {
                l+=s1[i];
            }
        }
        for(int i=0;i<s2.size();i++)
        {
            if(s2[i]>='a' && s2[i]<='z')
            {
                m+=s2[i];
            }
        }
        if(l==m)
        {
            cout<<"true"<<endl;
        }
        else
        {
            cout<<"false"<<endl;
        }
    
}
signed main(){
    fast;
    // int t;
    // cin >> t;
    // while(t--)
    // {
    //    solve();
    // }
    solve();
    return 0;
}


/*

    25(-1)->24(/2)->12(/3)->4(/2)->2(/2)

*/
