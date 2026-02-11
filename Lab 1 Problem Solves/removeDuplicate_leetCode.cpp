class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        vector<int> temp;
        for(int i = 0; i< nums.size() - 1; i++) {
            if(nums[i] == nums[i+1]) {
                nums.erase(nums.begin() + i);
                i--;
            }
        }
        return nums.size();
    }
};