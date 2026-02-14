#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        int lowestSize = INT_MAX;
       
        for(int i = 0; i<strs.size(); i++) {
            if(strs[i].size() < lowestSize) lowestSize = strs[i].size();
        }

        sort(strs.begin(), strs.end());
        cout<<strs[0]<<" "<<strs[1]<<" "<<strs[2]<<endl;

        for(int i = 0; i<lowestSize; i++) {
            if(strs[0][i] == strs[strs.size() - 1][i]) result += strs[0][i];
            else break;
        }

        return result;
    }
};

int main()
{
    Solution obj;
    vector<string> strs = {"flower","flow","flight"};
    cout<<obj.longestCommonPrefix(strs);
}