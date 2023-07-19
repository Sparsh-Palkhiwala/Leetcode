//122 - Best Time to Buy and Sell Stock II - https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/solutions/3786370/beginner-friendly-c-solution-very-easy-to-understand-beats-100-promise-you-ll-understand/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        for (int i = 1; i < prices.size(); i++) {
            int priceDiff = prices[i] - prices[i - 1];
            if (priceDiff > 0) {
                profit += priceDiff;
            }
        }
        return profit;
    }
};
/*
Approach
To calculate the maximum profit, the code iterates over the prices vector from the beginning to the second-to-last element. For each day, it compares the price of the next day (prices[i+1]) with the current day's price (prices[i]).

If the price on the next day is higher than the current day's price, it means a profit can be made by buying the stock on the current day and selling it on the next day. In that case, the profit is increased by the difference between the prices of the two days: prices[i+1] - prices[i].

Once the loop finishes, the function returns the accumulated profit.

Complexity analysis:
Time complexity: The loop iterates over the prices vector once, so the time complexity is O(n), where n is the number of elements in the vector.
Space complexity: The space complexity is O(1) because the code uses a constant amount of additional space, regardless of the size of the input.
In summary, the code efficiently calculates the maximum profit that can be obtained by buying and selling stocks based on the given prices. It does so by comparing adjacent prices and accumulating the positive differences, resulting in a linear time complexity.

Please Upvote and Happy LeetCoding
*/
