#include <iostream>
#include <climits>
using namespace std;

void candidates(int arr[], int n) {
    int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX, min3 = INT_MAX;

    for(int i = 0; i < n; i++) {
        if(arr[i] > max1) {
           max3 = max2;
            max2 = max1;
            max1 = arr[i];
        } else if(arr[i] > max2 && arr[i] != max1) {
            max3 = max2;
            max2 = arr[i];
        } else if(arr[i] > max3 && arr[i] != max2 && arr[i] != max1) {
            max3 = arr[i];
        }

        if(arr[i] < min1) {
            min3 = min2;
            min2 = min1;
            min1 = arr[i];
        } else if(arr[i] < min2 && arr[i] != min1) {
            min3 = min2;
            min2 = arr[i];
        } else  if(arr[i] < min3 && arr[i] != min2 && arr[i] != min1) {
            min3 = arr[i];
        }
        
    }

    int val1 =( max1 * max2 * max3);
    int val2 =( min1 * min2* min3);

    cout << val1 << " " << val2 << endl;
    cout << max(val1, val2) << endl;
}

int main() {
    int arr[] = {-10, -3, -5, -6, -20};
    int n = sizeof(arr) / sizeof(arr[0]);

    candidates(arr, n);

    return 0;
}