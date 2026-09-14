#include <cmath>

class Solution 
{
public:
    int maxProfit(vector<int>& prices) 
    {
        int maxPro = 0;
        int currProfit = 0;
        int minPrice = prices[0];

        int left = 0;
        int right = 0;

        for (int i = 0; i < prices.size(); ++i)
        {
            if (prices[i] < minPrice)
            {
                minPrice = prices[i];
                left = right;
                currProfit = 0;
            }

            else
            {
                currProfit = std::abs(prices[right] - prices[left]);

                if (currProfit > maxPro)
                {
                    maxPro = currProfit;
                }
            }

            ++right;
        }

        return maxPro;
    }
};
