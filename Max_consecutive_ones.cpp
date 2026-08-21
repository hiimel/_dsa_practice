//Link: https://leetcode.com/problems/max-consecutive-ones/

#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums) {
    int cntOnes = 0;
    int maxCnt = 0;

    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] == 1) {
            cntOnes++;
        } else {
            cntOnes = 0;
        }

        maxCnt = max(maxCnt, cntOnes);
    }

    return maxCnt;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << findMaxConsecutiveOnes(arr) << endl;

    return 0;
}