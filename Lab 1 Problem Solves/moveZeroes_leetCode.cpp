
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int limit = nums.size();
        for(int i = 0; i<limit; ) {
            if(nums[i] == 0) {
                nums.push_back(nums[i]);
                nums.erase(nums.begin() + i);
                limit--;
            }
            else i++;
        }
    }
};
