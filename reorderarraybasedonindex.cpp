***Day - 3
  question - https://www.geeksforgeeks.org/reorder-a-array-according-to-given-indexes/


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
// unordered_map<int, int>mp;
void heapify(vector<int>&v,int n,int pos)
{
    int largest=pos;
    int left=2*pos+1;
    int right=2*pos+2;
    if(left<n && v[left]>v[largest])
    {
        largest=left;
    }
    if(right<n && v[right]>v[largest])
    {
        largest=right;
    }
    if(largest!=pos)
    {
        swap(v[pos],v[largest]);
        heapify(v,n,largest);
    }
}
void heapsort(vector<int>&v,int n)
{
    for(int i=n/2-1;i>=0;i--)
    {
        heapify(v,n,i);
    }
    for(int i=n-1;i>=0;i--)
    {
        swap(v[0],v[i]);
        heapify(v,i,0);
    }
}
bool mapsort(pair<int, int>&p1,pair<int, int>&p2)
{
    return p1.second<p2.second;
}
//O(nlogn) using multimaps and extra space
void solve()
{
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<int>ind(n);
    for(int i=0;i<n;i++)
    {
        cin>>ind[i];
    }
    multimap<int, int>mp;
    // vector<pair<int, int>>p;
    for(int i=0;i<n;i++)
    {
        mp.insert(make_pair(ind[i],v[i]));
    }
    vector<int>v1;
    for(auto it:mp)
    {
       v1.push_back(it.second);
    }
    for(int i=0;i<n;i++)
    {
        v[i]=v1[i];
        // cout<<v[i]<<endl;
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<endl;
    }
}
//O(n) using extra space
void solve1()
{
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<int>ind(n);
    for(int i=0;i<n;i++)
    {
        cin>>ind[i];
    }
    vector<int>temp(n);
    for(int i=0;i<n;i++)
    {
        temp[ind[i]]=v[i];
    }
    for(int i=0;i<n;i++)
    {
        // cout<<temp[i]<<" ";
        v[i]=temp[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
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
//     solve1();
    return 0;
}
