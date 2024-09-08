// Problem name : Best time to buy and sell stock
// URL : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
// Date: sun Sep 8 2024 


#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int least_price = prices.at(0);
        for (int i = 1; i < prices.size(); i++)
        {
            if(prices.at(i)<least_price){
                least_price = prices.at(i);
            }
            else {
                int profit_with_this_price = prices.at(i) - least_price;
                if(profit_with_this_price > max_profit){
                    max_profit = profit_with_this_price;
                }
            }
        }
        return max_profit;
    }
};
