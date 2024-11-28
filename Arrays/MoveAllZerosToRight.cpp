// https://leetcode.com/problems/move-zeroes/description/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for (int i=0; i< nums.size(); ++i) {
            if(nums[i] == 0) {
                for (int j = i+1; j< nums.size(); ++j) {
                    if (nums[j] != 0) {
                        int temp = nums[i];
                        nums[i] = nums[j];
                        nums[j] = temp;
                        break;
                    }
                }
            }
        }
    }
};

// O(n) solution

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != 0) {
                ++left;
            } else
                break;
        }
        for (int i = left + 1; i < nums.size(); ++i) {
            if (nums[i] != 0) {
                int temp = nums[left];
                nums[left] = nums[i];
                nums[i] = temp;
                ++left;
            }
        }
    }
};