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
ll powe(ll x, ll y)
{ 
    x = x%mod, y=y%(mod-1);
    ll ans = 1;
    while(y>0)
    {
        if (y&1)
        {
            ans = (1ll * x * ans)%mod;
        }
        y>>=1;
        x = (1ll * x * x)%mod;
    }
    return ans;
}
int binarysearch(int n,vector<int>v,int ele)
{
    int left=0,right=n-1;
    while(left<=right)
    {
        int mid=(left+right)/2;
        if(v[mid]==ele)
        {
            return mid;
        }
        else if(v[mid]<ele)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
    return -1;
}
int helper(string str,string str1)
{
    string l=str+str1;
    string m=str1+str;
    return l>m;
}
unordered_map<int, int>mp;
void solve()
{
    int n,k;cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int maxi=0,sum=0;
    do
    {
        sum=0;
        for(int i=0;i<n-1;i++)
        {
            sum=sum+abs(v[i]-v[i+1]);
        }
        maxi=max(maxi,sum);
    } 
    while(next_permutation(v.begin(),v.end()));
    cout<<maxi<<endl;
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

