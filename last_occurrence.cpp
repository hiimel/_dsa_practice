#include <bits/stdc++.h>
using namespace std;

int upperBoundImplementation(vector<int>&nums, int target) {
    int n = nums.size();
    int left = 0;
    int right = n - 1;
    int ans = n;

    while(left <= right) {
        int mid = left + (right - left) / 2;

        if(nums[mid] > target) {
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return ans;
}

int main() {
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;

    int res = upperBoundImplementation(nums, target);

    cout << res - 1<< endl;

    return 0;
}