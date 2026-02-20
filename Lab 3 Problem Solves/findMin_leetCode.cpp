#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0;
        int last = nums.size() - 1;

        while (start < last) {
            int mid = (start + last) / 2;
            if(nums[mid] > nums[last]) {
                start = mid + 1;
            }
            else {
                last = mid;
            }
            
        }
        return nums[start];
    }
};

int main()
{
    Solution obj;
    vector<int> vec = {5,6,7,0,1,2,4};
    cout<<obj.findMin(vec);
    return 0;
}