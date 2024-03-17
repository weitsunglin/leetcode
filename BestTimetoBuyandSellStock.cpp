
#include "Solution.h"
#include <vector>
#include <algorithm> // For std::max
using namespace std;

int Solution::BestTimetoBuyandSellStock(std::vector<int>& prices) {
    int minPrice = INT_MAX;
    int maxProfit = 0;
    for (int price : prices) {
        minPrice = std::min(minPrice, price);
        maxProfit = std::max(maxProfit, price - minPrice);
    }
    return maxProfit;
}
