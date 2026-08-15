#include <bits/stdc++.h>
using namespace std;

int lb(vector<int>& nums, int x) {
    int n = nums.size();
    int left = 0, right = n - 1;
    int ans = n;

    while(left <= right) {
        int mid = left + (right - left) / 2;
        
        if(nums[mid] >= x) {
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return ans;
}

int ub(vector<int>& nums, int x) {
    int n = nums.size();
    int left = 0, right = n - 1;
    int ans = n;

    while(left <= right) {
        int mid = left + (right - left) / 2;
        
        if(nums[mid] > x) {
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
    
    int start = lb(arr, target);
    int end = ub(arr, target);

    int count = end - start;

    cout << count << endl;

    return 0;
}