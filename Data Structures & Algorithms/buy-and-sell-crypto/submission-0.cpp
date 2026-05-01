class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int low = 100;
        int high = 0;
        int ans = 0;
        for (int price : prices) {
            if (price > high) {
                high = price;
            }
            if (price < low) {
                high = price;   
                low = price;
            }
            ans = max(ans, high-low);
        }
        return ans;
    }
};
