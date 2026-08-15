#include <bits/stdc++.h>
using namespace std;

int lb(vector<int>& nums, int target) {
    int n = nums.size();    
    int left = 0, right = n - 1;
    int first = n;

    while(left <= right) {
        int mid = left + (right - left) / 2;

        if(nums[mid] >= target) {
            first = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return first;
}

int ub(vector<int>& nums, int target) {
    int n = nums.size();
    int left = 0, right = n - 1;
    int last = n;

    while(left <= right) {
        int mid = left + (right - left) / 2;

        if(nums[mid] > target) {
            last = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return last;
}

vector<int> searchRange(vector<int>& nums, int target) {
    int start = lb(nums, target);

    if(start == nums.size() || nums[start] != target) {
        return {-1, -1};
    }

    int end = ub(nums, target);

    return {start, end - 1};
}

int main() {
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;

    vector<int> res = searchRange(nums, target);

    cout << res[0] << " " << res[1] << endl;

    return 0;
}