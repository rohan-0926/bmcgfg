***Day - 7 Number of Strings That Appear as Substrings in Word
  Link - https://leetcode.com/problems/number-of-strings-that-appear-as-substrings-in-word/
  
  
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
    vector<string>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    string s;cin>>s;
  int count=0;
        for(int i=0;i<n;i++)
        {
            if(s.find(v[i])!=string::npos)
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


/*

    25(-1)->24(/2)->12(/3)->4(/2)->2(/2)

*/
