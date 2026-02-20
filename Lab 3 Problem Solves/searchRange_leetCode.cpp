#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1;
        int last = -1;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                if (first == -1) {
                    first = i;
                }
                last = i;
            }
            else if (nums[i] > target) {
                break;
            }
        }

        return {first, last};
    }
};

int main()
{
    Solution obj;
    vector<int> vec = {5,7,7,8,8,10};
    vector<int> res;
    res = obj.searchRange(vec, 8);

    for(int i = 0; i< res.size(); i++){
        cout<<res[i]<<" ";
    }
}