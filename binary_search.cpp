#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
    int n = nums.size();
    int left = 0;
    int right = n - 1;

    while(left <= right) {
        int mid = left + (right - left) / 2;

        if(nums[mid] == target) {
            return mid;
        } else if(target < nums[mid]) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return -1;
}

int main() {    
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target = 2;

    cout << search(nums, target) << endl;

    return 0;
}