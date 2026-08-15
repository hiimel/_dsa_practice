#include <bits/stdc++.h>
using namespace std;

int lwrBound(vector<int>& nums, int l) {
    int n = nums.size();
    int left = 0;
    int right = n - 1;
    int ans = n;

    while(left <= right) {
        int mid = left + (right - left) / 2;

        if(nums[mid] >= l) {
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return ans;
}

int upperBound(vector<int>& nums, int r) {
    int n = nums.size();
    int left = 0;
    int right = n - 1;
    int ans = n;

    while(left <= right) {
        int mid = left + (right - left) / 2;

        if(nums[mid] > r) {
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return ans;
}

int inRange(vector<int>& nums, int l, int r) {
    int start = lwrBound(nums, l);
    int end = upperBound(nums, r);
    int cnt = end - start;

    return cnt;
}

void printRange(vector<int>& nums, int l, int r) {
    int start = lwrBound(nums, l);
    int end = upperBound(nums, r);

    for(int i = start; i < end; i++) {
        cout << nums[i] << " ";
    }

    cout << endl;
}

int main() {
    vector<int> arr = {1, 3, 3, 5, 7, 8, 8, 8, 10};
    int L = 3, R = 8;

    cout << inRange(arr, L, R) << endl;

    cout << "Elements are: " << endl;
    printRange(arr, L, R);

    return 0;
}