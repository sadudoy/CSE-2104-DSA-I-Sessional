#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        string temp = "";
        string finalS = "";
        vector<string> vec;
            
        for(int i=0; i<s.size(); i++) {
            if(s[i] != ' ') {
                temp += s[i];
            }
            else if(temp.length() > 0) {
                vec.push_back(temp);
                temp = "";
            }
        }
            if(temp.length() > 0) {
                vec.push_back(temp);
            }
                
        
        
        for(int i=vec.size()-1; i>=0; i--) {
            finalS += vec[i]+" ";
        }
        finalS.erase(finalS.size()-1, 1);
        return finalS;
    }
};

int main()
{
    Solution obj;
    cout<<obj.reverseWords("the sky is blue");
}

