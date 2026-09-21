class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = prices[0];
        int maxprofit = 0;
        for (int i = 0 ;i<prices.size(); i++){
            int currentprice = prices[i];
            if (currentprice < minprice){
                minprice = currentprice;
            }
            int profit = currentprice - minprice;
            maxprofit = max(maxprofit , profit);
        }
        return maxprofit;
    }
};