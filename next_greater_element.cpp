#include <bits/stdc++.h>
using namespace std;

void lb(vector<int>& nums, int target) {
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

    if(ans != n) {
        cout << nums[ans] << endl;
    } else {
        cout << target << " --There is no number greater than or equal to target..." << endl;
    }
}

int main() {
    vector<int> arr = {1, 3, 3, 5, 7, 9, 11};
    int target = 11;

    lb(arr, target);
    lb(arr, 13);

    return 0;
}