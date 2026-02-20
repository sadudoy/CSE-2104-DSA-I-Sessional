class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int last = nums.size() - 1;
        bool flag = false;
        int index;
        while(start <= last) {
            int mid = (start + last) / 2;
            if(nums[mid] == target) {
                flag = true;
                index = mid;
                break;
            }

            else if(nums[mid] < target) {
                start = mid + 1;
            }

            else  {
            last = mid - 1; 
            }
        }

        if(flag) return index;
        else return -1;
    }
};