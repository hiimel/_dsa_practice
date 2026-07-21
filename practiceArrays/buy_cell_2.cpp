#include <iostream>
using namespace std;

void stock2(int arr[], int n) {
    int profit = 0;
    
    for(int i = 1; i < n; i++) {
        if(arr[i] > arr[i - 1]) {
            profit = profit + (arr[i] - arr[i - 1]);
        }
    }

    cout << profit << endl;
}

int main() {
    int arr[] =  {4, 2};
    int n = sizeof(arr) / sizeof(arr[0]); 

    stock2(arr, n);

    return 0;
}