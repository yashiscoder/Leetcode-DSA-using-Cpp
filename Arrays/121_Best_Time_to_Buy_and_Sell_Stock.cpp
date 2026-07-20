#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class BuySell {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int mini = prices[0];

        for (int i = 1; i < prices.size(); i++) {
            profit = max(profit, prices[i] - mini);
            mini = min(mini, prices[i]);
        }return profit;
    }
};

int main() {
    BuySell obj;
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << "Maximum Profit = " << obj.maxProfit(prices);
    return 0;
}