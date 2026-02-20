class Solution {
public:
    int search(vector<int>& nums, int target) {
        bool flag = false;
        int index;
        for(int i = 0; i<nums.size(); i++) {
            if(nums[i] == target) {
                index = i;
                flag = true;
                break;
            }
        }
        if(flag) return index;
        else return -1;
    }
};