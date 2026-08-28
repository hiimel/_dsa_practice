#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& nums, int x) {
    int n = nums.size();
    int left = 0;
    int right = n - 1;
    
    while(left <= right) {
        int mid = left + (right - left) / 2;

        if(nums[mid] == x) {
            return mid;
        } else if(nums[mid] > x) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return -1;
}

int main() {
    int n, target;
    cin >> n >> target;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << binarySearch(arr, target) << endl;

    return 0;
}