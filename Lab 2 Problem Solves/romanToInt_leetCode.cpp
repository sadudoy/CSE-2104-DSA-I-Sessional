#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        
        int total = 0;
        for(int i = s.size()-1; i>=0; i--){
            if(s[i] == 'I') total += 1;
            else if(s[i] == 'V' && i>0 && s[i-1] == 'I') {
                total += 4;
                i--;
                if(i<0) break;
            }
            else if(s[i] == 'V') total += 5;
            else if(s[i] == 'L' && i>0 && s[i-1] == 'X' ) {
                total += 40;
                i--;
                if(i<0) break;
            }
            else if(s[i] == 'L') total += 50;
            else if(s[i] == 'X' && i>0 && s[i-1] =='I') {
                total += 9;
                i--;
                if(i<0) break;
            }
            else if(s[i] == 'X') total += 10;
            
            else if(s[i] == 'C' && i>0 && s[i-1] == 'X') {
                total += 90;
                i--;
                if(i<0) break;
            }
            else if(s[i] == 'C') total += 100;
            else if(s[i] == 'D' && i>0 && s[i-1] == 'C'){
                total += 400;
                i--;
                if(i<0) break;
            }
            else if(s[i] == 'D') total += 500;
            else if(s[i] == 'M' && i>0 && s[i-1] == 'C') {
                total += 900;
                i--;
                if(i<0) break;
            }
            else if(s[i] == 'M') total += 1000;

        }
        return total;
    }
    
};

int main()
{
    Solution obj;
    cout<<obj.romanToInt("IVII");
}