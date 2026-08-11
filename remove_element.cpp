#include <bits/stdc++.h>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    int pos = 0;

    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] != val) {
            nums[pos] = nums[i];
            pos++;
        }
    }

    return pos;
}

int main() {
    vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
    int val = 2;

    int res = removeElement(nums, val);

    cout << res << endl;

    return 0;
}