#include <bits/stdc++.h>
using namespace std;

int lowerBoundImplementation(vector<int>& nums, int target) {
    int n = nums.size();
    int left = 0;
    int right = n - 1;
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
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;

    int res = lowerBoundImplementation(nums, target);

    cout << res << endl;

    return 0;
}