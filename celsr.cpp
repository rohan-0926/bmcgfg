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
    int left=0,right=n-1,count=0;
    while(left<=right)
    {
        int mid=(left+right)/2;
        if(v[mid]>k)
        {
            // count++;
            left=mid-1;
            if(v[left]<k)
            {
                count++;
                // left++;
            }
            else
            {
                left=mid-1;
                if(left==0)
                {
                    break;
                }
            }
        }
        else if(v[mid]<k)
        {
            count++;
        }
        right--;
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

