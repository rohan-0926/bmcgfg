*** Day - 10 Find middle element in a stack



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
int top=0;

void solve()
{
    stack<int>st;
    st.push(2);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);
    int i=0,res=0;
    if(st.size()%2!=0){
        while(!st.empty())
        {
            int mid=(st.size())/2;
            i++;
            st.pop();
            if(i==mid)
            {
                res=st.top();
            }
        }
    }
    else
    {
        i=0,res=0;
        while(!st.empty())
        {
            int mid=((st.size())/2);
            i++;
            st.pop();
            if(i-1==mid)
            {
                res=st.top();
            }
        }
    }

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
