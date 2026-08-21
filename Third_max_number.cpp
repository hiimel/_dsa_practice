//Link: https://leetcode.com/problems/third-maximum-number/description/

#include <bits/stdc++.h>
using namespace std;

int thirdMax(vector<int>& nums) {
    long long firstEl = LLONG_MIN, secondEl = LLONG_MIN, thirdEl = LLONG_MIN;

    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] > firstEl) {
            thirdEl = secondEl;
            secondEl = firstEl;
            firstEl = nums[i];
        } else if(nums[i] > secondEl && nums[i] != firstEl) {
            thirdEl = secondEl;
            secondEl = nums[i];
        } else if(nums[i] > thirdEl && nums[i] != secondEl && nums[i] != firstEl) {
            thirdEl = nums[i];
        }
    }

    if(thirdEl == LLONG_MIN) {
        return firstEl;
    } else {
        return thirdEl;
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << thirdMax(arr) << endl;
    return 0;
}