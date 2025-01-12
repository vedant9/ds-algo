class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = 99999;
        int max = -99999;
        int delta = 0;
        int maxDelta = 0;
        for (int i=0;i<prices.size();++i) {
            if(prices[i]<min) {
                min = prices[i];
                delta = 0;
                max = prices[i];
            }
            if(prices[i]>max) {
                max = prices[i];
                delta = max - min;
                if( delta > maxDelta) {
                    maxDelta = delta;
                }
            }
        }
        return maxDelta;
    }
};