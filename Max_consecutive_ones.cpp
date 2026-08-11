#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums) {
    int count = 0; 
    int maxCount = 0;

    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] == 1) {
            count++;
        } else {
            maxCount = max(maxCount, count);
            count = 0;
        }
    }

    maxCount = max(maxCount, count);

    return maxCount;
}

int main() {
    vector<int> a = {1,0,1,1,0,1};

    cout << findMaxConsecutiveOnes(a) << endl;

    return 0;
}