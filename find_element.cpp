#include <bits/stdc++.h>
using namespace std;

int lb(vector<int>& nums, int target) {
    int n = nums.size();
    int left = 0, right = n - 1;
    int ans = n;

    while(left <= right) {
        int mid = left + (right - left) / 2;

        if(nums[mid] >= target) {
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {1, 3, 3, 5, 7, 9, 11};
    int target = 3;

    int idx = lower_bound(arr.begin(), arr.end(), target) - arr.begin();

    if(idx != arr.size() && arr[idx] == target) {
        cout << idx << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}