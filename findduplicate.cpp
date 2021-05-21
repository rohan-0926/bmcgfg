#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int v[n];
    vector<int>v1;
    for(int i=0;i<n;cin>>v[i++]);
    map<int, int>mp;
    for(int i=0;i<n;i++)
    {
        mp[v[i]]++;
    }
    map<int, int>::iterator it;
    for(it=mp.begin();it!=mp.end();it++)
    {
        if(it->second>1)
        {
            v1.push_back(it->first);
        }
    }
    if(v1.size()==0)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        for(int i=0;i<v1.size();i++)
        {
            cout<<v1[i]<<" ";
        }
    }
    return 0;
}

// below code is leetcode solution
// class Solution {
// public:
//     vector<int> findDuplicates(vector<int>& nums) 
//     {
//         vector<int>v1;
//       map<int, int>mp;
//         for(int i=0;i<nums.size();i++)
//         {
//             mp[nums[i]]++;
//         }
//         map<int, int>::iterator it;
//         for(it=mp.begin();it!=mp.end();it++)
//         {
//             if(it->second>1)
//             {
//                 v1.push_back(it->first);
//             }
//         }
//         return v1;
//     }
// };
