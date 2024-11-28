// https://leetcode.com/problems/rotate-array/description/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        int pivot = nums.size() - k;
        if (pivot < 0) {
            pivot *= -1;
        }
        vector<int> nums2;
        if (pivot > 0) {
            for (int i = pivot; i < nums.size(); ++i) {
                nums2.push_back(nums[i]);
            }
            for (int i = 0; i < pivot; ++i) {
                nums2.push_back(nums[i]);
            }
            nums = nums2;
        }
    }
};

// Better solution

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k %= nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};