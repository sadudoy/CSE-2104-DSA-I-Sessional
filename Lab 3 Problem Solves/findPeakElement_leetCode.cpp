#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start = 0;
        int last = nums.size()-1;

        while(start < last) {
            int mid = (start + last)/2;
            if(nums[mid] < nums[mid+1]) {
                start = mid + 1;
            }
            else last = mid;
        }
        return start;
    }
};

int main()
{
    Solution obj;
    vector<int> vec = {1,2,3,1};
    cout<<obj.findPeakElement(vec);
    return 0;
}