***Day - 8 Build an Array With Stack Operations
  Link - https://leetcode.com/problems/build-an-array-with-stack-operations/
  
  
  
  class Solution {
public:
    vector<string> buildArray(vector<int>& v, int n) {
        
        vector<int>temp=v;
        int check=temp[temp.size()-1];
        vector<string>res;
         for(int i=1;i<=check;i++)
            {
                if(find(v.begin(),v.end(),i)!=v.end())
                {
                    res.push_back("Push");
                }
                else
                {
                    res.push_back("Push");
                    res.push_back("Pop");
                }
            }
        return res;
        
    }
};
