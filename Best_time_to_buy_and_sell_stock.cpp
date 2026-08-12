#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int maxValue = 0;
    int minPrice = INT_MAX;

    for(int p: prices) {
        if(p < minPrice) {
            minPrice = p;
        } else {
            int profit = p - minPrice;
            maxValue = max(maxValue, profit);
        }
    }

    return maxValue;
}

int main() {
    vector<int> nums = {7, 1, 5, 3, 6};

    int res = maxProfit(nums);

    cout << res << endl;

    return 0;
}