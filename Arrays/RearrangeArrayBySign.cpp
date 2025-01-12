class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int pIdx = 0;
        int nIdx = 0;
        vector<int> arrangedNums;
        for (int i=0;i<nums.size();++i) {
            if(i%2==0) {
                while(nums[pIdx]<0 && pIdx<nums.size()) {
                    ++pIdx;
                }
                arrangedNums.push_back(nums[pIdx++]);
            }
            else {
                while(nums[nIdx]>0 && nIdx<nums.size()) {
                    ++nIdx;
                }
                arrangedNums.push_back(nums[nIdx++]);
            }
        }
        return arrangedNums;
    }
};