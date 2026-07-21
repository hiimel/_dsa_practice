#include <iostream>
#include <climits>
using namespace std;

void  stocks(int arr[], int n) {
    int minPrices = arr[0];
    int maxProfit = 0;

    for(int i = 1; i < n; i++) {
        int profit = arr[i] -  minPrices;
        maxProfit = max(maxProfit, profit);
        minPrices = min(minPrices, arr[i]);
    }

    cout <<  maxProfit <<  endl;
}

int main() {
    int prices[] = {1, 3, 6, 9, 11};
    int n = sizeof(prices) / sizeof(prices[0]);

    stocks(prices, n);

    return 0;
}