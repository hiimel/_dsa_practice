#include <bits/stdc++.h>
using namespace std;

int thirdMax(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    int cnt = 1;
    for(int i = nums.size() - 2; i >= 0; i--) {
        if(nums[i] != nums[i + 1]) {
            cnt++;
        }

        if(cnt == 3) {
            return nums[i];
        }
    }

    return nums[nums.size() - 1];
}

int main() {
    vector<int> a = {5, 2, 2};

    cout << thirdMax(a) << endl;

    return 0;
}