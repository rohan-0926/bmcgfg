*** Day - 11 Max Number of K-Sum Pairs
    link - https://leetcode.com/problems/max-number-of-k-sum-pairs/
    


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
//i-1,j
//i,j+1
//i+1,j
//i,j-1
int x4[]={-1,0,1,0};
int y4[]={0,1,0,-1};
void solve()
{
   int n,k;cin>>n>>k;
   vector<int>v(n);
   for(int i=0;i<n;i++)
   {
       cin>>v[i];
   }
   int count=0;
   sort(v.begin(),v.end());
   int left=0,right=v.size()-1;
   while(left<right)
    {
        if(v[left]==k-v[right])
        {
            count++;
            left++;
            right--;
        }
        else if(v[left]<k-v[right])
        {
            left++;
        }
        else
        {
            right--;
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


/*

    25(-1)->24(/2)->12(/3)->4(/2)->2(/2)

*/

