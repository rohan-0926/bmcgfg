*** Day - 9 Second Largest Digit in a String
    Link - https://leetcode.com/problems/second-largest-digit-in-a-string/
    
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
    string s;cin>>s;
         map<char, int>mp;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='0' && s[i]<='9')
            {
               mp[s[i]]++;   
            }
        }
        vector<int>v;
        if(mp.size()<=1)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            for(auto it:mp)
            {
                v.push_back(it.first-48);
            }
        }
        sort(v.begin(),v.end(),greater<int>());
        cout<<v[1]<<endl;
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
