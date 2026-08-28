#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>& nums, int start, int end) {
    int pivot = nums[end];
    int idx = start - 1;

    for(int j = start; j < end; j++) {
        if(nums[j] < pivot) {
            idx++;
            swap(nums[idx], nums[j]);
        }
    }

    idx++;
    swap(nums[idx], nums[end]); // for pivot

    return idx;
}

void quickSort(vector<int>& nums, int start, int end) {
    if(start < end) {
        int pivotIdx = partition(nums, start, end);

        quickSort(nums, start, pivotIdx - 1); // left part
        quickSort(nums, pivotIdx + 1, end); // right part
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    quickSort(arr, 0, arr.size() - 1);
    for(int x: arr) {
        cout << x << " ";
    }

    cout << endl;
    return 0;
}