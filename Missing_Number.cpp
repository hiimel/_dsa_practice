// Link: https://leetcode.com/problems/missing-number/submissions/2112450460/?envType=problem-list-v2&envId=binary-search

#include <bits/stdc++.h>
using namespace std;

int missingNumber (vector<int>& nums) {
    int n = nums.size();

    int nth_sum = n * (n + 1) / 2;

    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += nums[i];
    }

    int res = nth_sum - sum ;

    return res;
}

int main() {
    vector<int> nums = {0, 1};

    cout << missingNumber(nums) << endl;

    return 0;
}
