#include <iostream>
#include <climits>
using namespace std;

void  stocks(int arr[], int n) {
    int buy[100000];
    buy[0] = INT_MAX;

    for(int i = 1; i < n; i++) {
        buy[i] = min(buy[i  - 1], arr[i - 1]);
    }

    int max_profit = 0;
    for(int i =  0; i < n; i++) {
        int curren_profit = arr[i] - buy[i];
        max_profit = max(max_profit, curren_profit);
    }

    cout << max_profit << endl;
}

int main() {
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(prices[0]);

    stocks(prices, n);

    return 0;
}