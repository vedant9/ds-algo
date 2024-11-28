// https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/

class Solution {
public:
    bool check(vector<int>& nums) {
        bool isArrayOk = true;
        for (int i = 0; i < nums.size() - 1; ++i) {
            if (nums[i] > nums[i + 1]) {
                if (nums[i + 1] > nums[0]) {
                    isArrayOk = false;
                    break;
                }
                for (int j = i + 1; j < nums.size() - 1; ++j) {
                    if (nums[j] > nums[j + 1] || nums[j] > nums[0] || nums[j + 1] > nums[0]) {
                        isArrayOk = false;
                        break;
                    }
                }
            }
        }
        return isArrayOk;
    }
};
