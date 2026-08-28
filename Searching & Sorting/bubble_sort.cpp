#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& nums, int n) {
    for(int i = 0; i < n - 1; i++) {
        bool isSwap = false;

        for(int j = 0; j < n - 1; j++) {
            if(nums[j] > nums[j + 1]) {
                swap(nums[j], nums[j + 1]);
                isSwap = true;
            }
        }

        if(!isSwap) {
            break;
        }
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bubbleSort(arr, n);
    for(int x: arr) {
        cout << x << " ";
    }
    
    cout << endl;
    return 0;
}