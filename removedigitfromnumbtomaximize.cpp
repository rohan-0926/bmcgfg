*** Day - 9 Remove Digit From Number to Maximize Result
    Link - https://leetcode.com/contest/weekly-contest-291/problems/remove-digit-from-number-to-maximize-result/
    

class Solution {
public:
    string removeDigit(string v, char digit) {
        vector<string>st;
        vector<int>ind;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==digit)
            {
                ind.push_back(i);
            }
        }
        for(int i=0;i<ind.size();i++)
        {
            string temp=v;
            temp.erase(temp.begin()+ind[i]);
            st.push_back(temp);
        }
        sort(st.begin(),st.end(),greater<string>());
        return st[0];
    }
};
