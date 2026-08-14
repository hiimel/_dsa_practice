#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int n = nums.size();
    int low = 0, high = n - 1;
    int ans = n;

    while(low <= high) {
        int mid = low + (high - low) / 2;

        if(nums[mid] >= target) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {1, 3, 5, 6};
    int target = 7;

    int res = searchInsert(arr, target);

    cout << res << endl;

    return 0;
}