#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int>& nums) {
    int n = nums.size();
    vector<int> res;

    map<int, int> freq;
    for(int num: nums) {
        freq[num]++;
    }

    for(auto p: freq) {
        if(p.second > n / 3) {
            res.push_back(p.first);
        }
    }

    return res;

};

int main() {
    vector<int> nums = {18, 26, 17, 26, 26, 17, 17, 11, 26, 26, 26, 19, 1, 17, 17, 26, 26, 38, 17, 17, 17, 2, 13};

    vector<int> res = majorityElement(nums);

    for(int i: res) {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}