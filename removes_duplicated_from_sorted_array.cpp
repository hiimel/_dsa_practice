#include <bits/stdc++.h>
using namespace std;

int removesDuplicates(vector<int> &nums) {
    int l = 0;

    for(int r = 0; r < nums.size(); r++) {
        if(nums[r] != nums[l]) {
            l++;
            nums[l] = nums[r];
        }
    }

    return l + 1;
}

int main() {
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};

    int res = removesDuplicates(nums);

    cout << res << endl;

    return 0;
}