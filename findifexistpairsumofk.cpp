*****Day - 1
    Question - https://www.geeksforgeeks.org/given-a-sorted-and-rotated-array-find-if-there-is-a-pair-with-a-given-sum/








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
bool ispalindrome(string str)
{
     string temp=str;
        reverse(str.begin(),str.end());
        if(temp==str)
        {
            return true;
        }
        return false;
}
 string res;
int helper(string str,string str1)
{
    string l=str+str1;
    string m=str1+str;
    return l>m;
}
// int n;cin>>n;
//     vector<int>arr(n);
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//      int left=0,right=n-1;
// 	    while(left<right)
// 	    {
// 	        int mid=left+(right-left)/2;
// 	        if(arr[mid]<arr[mid-1])
// 	        {
// 	            // return mid;
//                 cout<<mid<<endl;
//                 break;
// 	        }
// 	        else if(arr[mid]>arr[mid+1])
// 	        {
// 	            cout<<mid+1<<endl;
//                 break;
// 	        }
// 	        if(arr[mid]<arr[left])
// 	        {
// 	            right=mid-1;
// 	        }
// 	        else if(arr[mid]>arr[right])
// 	        {
// 	            left=mid+1;
// 	        }
// 	        else
// 	        {
// 	            break;
// 	        }
// 	    }
unordered_map<int, int>mp;
void solve()
{
    int n,k;cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int pos=v[0];
    for(int i=1;i<n;i++)
    {
        if(pos>v[i])
        {
            pos=i;
        }
    }
    int right=n-1,left=0;
    while(left<=right)
    {
        if(v[pos]+v[left]==k)
        {
            cout<<"True"<<endl;
            break;
        }
        else if(v[pos]+v[left]>k)
        {
            // right=left;
            int l=v[pos]+v[right];
            // pos++;
            if(l==k)
            {
                cout<<"True"<<endl;
                break;
            }
            else
            {
                right--;
                if(right==pos)
                {
                    cout<<"False"<<endl;
                }
            }
        }
        else if(v[pos]+v[left]<k)
        {
           int l=v[pos]+v[right];
           if(l==k)
           {
               cout<<"True"<<endl;
               break;
           }
           else if(l<k)
           {
               pos++;
           }
           if(right==pos)
           {
               cout<<"False"<<endl;
           }
        }
        left++;
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

