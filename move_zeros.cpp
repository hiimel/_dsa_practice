#include <bits/stdc++.h>
using namespace std;

void moveZeros(vector<int>& nums) {
    int n = nums.size();
    int pos = 0;

    for(int i = 0; i < n; i++) {
        if(nums[i] != 0) {
            swap(nums[pos], nums[i]);
            pos++;
        }
    }

}

int main() {
    vector<int> a = {0,1,0,3,12};

    moveZeros(a);

    for(int i = 0; i < a.size(); i++) {
        cout << a[i]<< " ";
    }

    cout << endl;

    return 0;
}