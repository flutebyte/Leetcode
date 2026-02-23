class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        int ans= 0;
        
        for(int i=0; i<size-1; i++){
            if(prices[i]<prices[i+1]){
                ans += prices[i+1]-prices[i];
            }
        }
        
        return ans;
    }
};