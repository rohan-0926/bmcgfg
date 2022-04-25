*** Day- 5 N-Repeated Element in size 2N array
    link - https://leetcode.com/problems/n-repeated-element-in-size-2n-array/




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
void solve()
{
    int n;cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
	 map<int, int>mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        // vector<int>v;
        int res=0;
        for(auto it:mp)
        {
            if(it.second>1)
            {
                res=it.first;
                break;
            }
        }
        cout<<res<<endl;
}




signed main(){
    fast;
    // int t = 1;
    // cin >> t;
    // while(t--){
    // 	// solve();
    // }
    solve();
    return 0;
}
