*** Day - 10  Shortest Unsorted Continuous Subarray
    link - https://leetcode.com/problems/shortest-unsorted-continuous-subarray/
    


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

void solve()
{
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int ele=-1;
    int maxi=v[0];
    for(int i=1;i<n;i++)
    {
        if(maxi>v[i])
        {
            ele=i;
        }
        else
        {
            maxi=v[i];
        }
    }
    int ele1=0;
    int mini=v[n-1];
    for(int i=n-1;i>=0;i--)
    {
        if(mini<v[i])
        {
            ele1=i;
        }
        else
        {
              mini=v[i];
        }
    }
    // cout<<ele<<" "<<maxi<<endl;
    // cout<<ele1<<" "<<mini<<endl;
    int res=(ele-ele1)+1;
    cout<<res<<endl;    
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
