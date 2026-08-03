#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool isTwoSum(vector<int> &arr, int target) {
    unordered_set<int> set1;

    for(auto num: arr) {
        int req = target - num;

        if(set1.find(req) != set1.end()) {
            return true;
        }

        set1.insert(num);
    }
    
    return false;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    if(isTwoSum(arr, target)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}