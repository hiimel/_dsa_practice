#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums, int start, int mid, int end) {
    vector<int> temp;
    int i = start, j = mid + 1;

    while(i <= mid && j <= end) {
        if(nums[i] <= nums[j]) {
            temp.push_back(nums[i]);
            i++;
        } else {
            temp.push_back(nums[j]);
            j++;
        }
    }

    while(i <= mid) {
        temp.push_back(nums[i]);
        i++;
    }

    while(j <= end) {
        temp.push_back(nums[j]);
        j++;
    }

    for(int idx = 0; idx < temp.size(); idx++) {
        nums[start + idx] = temp[idx];
    }
}

void mergeSort(vector<int>& nums, int start, int end) {
    if(start < end) {
        int mid = start + (end - start) / 2;

        mergeSort(nums, start, mid);  // for left
        mergeSort(nums, mid + 1, end);  // for right
        merge(nums, start, mid, end);
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    mergeSort(arr, 0, arr.size() - 1);
    for(int x: arr) {
        cout << x << " ";
    }

    cout << endl;
    return 0;
}