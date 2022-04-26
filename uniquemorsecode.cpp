***Day -6 Unique Morse Code  
  Link - https://leetcode.com/problems/unique-morse-code-words/



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
    vector<string>words={"gin","zen","gig","msg"};
   vector<string>ch={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
//       vector<int>pos;
//         vector<vector<int>>v;
        // for(int i=0;i<words.size();i++)
        // {
        //     string str=words[i];
        //     for(int j=0;j<str.size();j++)
        //     {
        //         int ele=str[j]-97;
        //         pos.push_back(ele);
        //     }
        //     v.push_back(pos);
        // }
        // fflush(stdin);
        set<string>st;
        for(int i=0;i<words.size();i++)
        {
            string str="";
            for(int j=0;j<words[i].size();j++)
            {
                str+=ch[words[i][j]-'a'];
            }
            st.insert(str); 
            // cout<<str<<endl;           
        }
        for(auto it:st)
        {
            cout<<it<<endl;
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
