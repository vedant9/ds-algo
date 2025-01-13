class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int, int> hash;
        for(int i=0;i<nums.size();++i) {
            hash[nums[i]]++;
        }
        int max = 1;
        int cur = 1;
        map<int, int>::iterator itr = hash.begin();
        int prevEle = itr->first;
        ++itr;
        for(; itr != hash.end(); ++itr) {
            if(itr->second>0 && (itr->first == (prevEle+1))) {
                ++cur;
                if(cur>max){
                    max = cur;
                }
            }
            else {
                cur = 0;
            }
            prevEle = itr->first;
        }
        return max;
    }
};