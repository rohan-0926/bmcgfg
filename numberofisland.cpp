*** Day - 10 number of islands (4-neighbourhood)

  
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
void dfs(vector<vector<int>>&v,int i,int j,int r,int c)
{
    if(i<0 || j<0 || i>=r || j>=c || v[i][j]!=1)
    {
        return;
    }
    v[i][j]=2;
    for(int k=0;k<4;k++)
    {
        dfs(v,i+x4[k],j+y4[k],r,c);
    }
}
int numberofisland(vector<vector<int>>&v,int r,int c)
{
    int count=0;
    if(r==0)
    {
        return 0;
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(v[i][j]==1)
            {
                dfs(v,i,j,r,c);
                count++;
            }
        }
    }
    return count;
}
void solve()
{
   int r,c;cin>>r>>c;
   vector<vector<int>>v;
   for(int i=0;i<r;i++)
   {
       vector<int>row;
       for(int j=0;j<c;j++)
       {
           int ele;cin>>ele;
           row.push_back(ele);
       }
       v.push_back(row);
   }
   cout<<numberofisland(v,r,c)<<endl;
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

   
