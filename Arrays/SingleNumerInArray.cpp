// https://leetcode.com/problems/single-number/description/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xorOp = 0;
        for (int i = 0; i < nums.size(); ++i) {
            xorOp = xorOp ^ nums[i];
        }
        return xorOp;
    }
};