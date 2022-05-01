***Day - 9 Crawler Log Folder
  link - https://leetcode.com/problems/crawler-log-folder/
  

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
        int n;cin>>n;
        vector<string>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
         stack<string>st;
        for(int i=0;i<v.size();i++)
        {
            // string top=st.empty() ? "@" : st.top();
            if(v[i] == "./")
            {
                continue;
            }
            else if(v[i] == "../")
            {
                if(st.size())
                {
                    st.pop();
                }
            }
            else
            {
                st.push(v[i]);
            }
        }
        cout<<st.size()<<endl;
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
