#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& nums, int n) {
    for(int i = 1; i < n; i++) {
        int key = nums[i];
        int j = i - 1;

        while(j >= 0 && nums[j] > key) {
            nums[j + 1] = nums[j];
            j--;
        }

        nums[j + 1] = key;
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    insertionSort(arr, n);
    for(int x: arr) {
        cout << x << " ";
    }

    cout << endl;
    return 0;
}