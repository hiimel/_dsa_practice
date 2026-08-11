#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
    int n = nums.size();

    unordered_map<int, int> freq;
    for(int num: nums) {
        freq[num]++;

        if(freq[num] > n / 2) {
            return num;
        }
    }

    return -1;
}

int main() {
    vector<int> nums = {3, 2, 3};

    int res = majorityElement(nums);

    cout << res << endl;

    return 0;
}