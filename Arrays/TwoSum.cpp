// https://leetcode.com/problems/two-sum/description/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indices;
        int n = nums.size();
        for ( int i=0; i<n; ++i) {
            for (int j = i+1; j<n;++j) {
                if(nums[i] + nums[j] == target) {
                    indices.push_back(i);
                    indices.push_back(j);
                    break;
                }
            }
        }
        return indices;
    }
};

// Optimized using map

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int complement = target - nums[i];
            if (numMap.count(complement)) {
                return {numMap[complement], i};
            }
            numMap[nums[i]] = i;
        }

        return {}; // No solution found
    }
};