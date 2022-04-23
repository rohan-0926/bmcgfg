*** Day-4 Cells in aRange on an Excel
    link - https://leetcode.com/problems/cells-in-a-range-on-an-excel-sheet/


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
//Brute force approach O(mn)
void solve()
{
   string str;cin>>str;
   char ch=str[0];
   char ch1=str[3];
   vector<char>v;
   for(int i=0;i<str.size();i++)
   {
       if(str[i]>='0' && str[i]<='9')
       {
           v.push_back(str[i]);
       }
   }
   sort(v.begin(),v.end(),greater<char>());
   int large=(v[0]-48);
   int small=(v[1]-48);
//    cout<<small<<endl;
   vector<string>res;
   if(large==small)
   {
       
       for(char i=ch;i<=ch1;i++)
       {
           string l=i+to_string(large);
           res.push_back(l);
       }
   }
   else
   {
    //    res.resize(0);
        for(int i=small;i<=large;i++)
        {
            string s="";
           for(char j=ch;j<=ch1;j++)
           {
              s=j+to_string(i);
            //   cout<<s<<endl;
              res.push_back(s);
           }
        //    cout<<s<<endl;
        }
        sort(res.begin(),res.end());
    }
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
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
    return 0;
}
