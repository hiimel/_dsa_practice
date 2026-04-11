#include <bits/stdc++.h>
using namespace std;

void fourthLargestElement(vector<int> &arr, int n) {
    int max = INT_MIN, secondMax = INT_MIN;
    int thirdMax = INT_MIN, fourthMax = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(arr[i] > max) {
            fourthMax = thirdMax;
            thirdMax = secondMax;
            secondMax = max;
            max = arr[i];
        } else if(arr[i] > secondMax) {
            fourthMax = thirdMax;
            thirdMax = secondMax;
            secondMax = arr[i];
        } else if(arr[i] > thirdMax) {
            fourthMax = thirdMax;
            thirdMax = arr[i];
        } else if(arr[i] > fourthMax) {
            fourthMax = arr[i];
        }
    }

    cout << fourthMax << endl;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    fourthLargestElement(arr, n);

    return 0;
}