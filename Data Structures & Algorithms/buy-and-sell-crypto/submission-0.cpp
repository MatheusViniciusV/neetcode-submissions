class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int e = 0, d = 1, s = prices.size(), m = 0;

        if(s == 1) return 0;

        while(d < s)
        {
            if(prices[e] > prices[d])
            {
                e++;
            }
            else
            {
                m = max(m, prices[d] - prices[e]);
                d++;
            }
        }

        return m;
    }
};
