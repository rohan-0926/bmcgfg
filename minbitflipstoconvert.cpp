*** Day - 5 Minimum Flip Bits To convert a Number (using bitset)
    link - https://leetcode.com/problems/minimum-bit-flips-to-convert-number/



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
int diagele(int i,int j,vector<vector<int>>&v)
{
    int ele=0;
    while(i<v.size() && j<v[0].size())
    {
       ele=v[i][j];
        i++;
        j++;
    }
    return ele;
}
void solve()
{
   int start,goal;cin>>start>>goal;
    bitset<2000>bt1=start;
        bitset<2000>bt2=goal;
        int count=0;
        for(int i=0;i<bt1.size();i++)
        {
            if(bt1[i]!=bt2[i])
            {
                count++;
            }
        }
    cout<<count<<endl;
  
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
