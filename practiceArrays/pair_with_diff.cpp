#include <bits/stdc++.h>
using namespace std;

vector<int> findPairDiff(vector<int> &arr, int n, int target) {
    int left = 0;
    for(int right = 1; right < n; right++) {
        int diff = arr[right] - arr[left];

        if(diff == target) {
            return {left, right};
        } else if(diff < target) {
            right++;
        } else {
            left++;
        }
    }

    return {-1, -1};
}

int  main() {
    vector<int> arr = {1, 4, 7, 9, 11, 15};
    int n = arr.size();
    int target = 7;

    vector<int> result = findPairDiff(arr, n, target);
    cout << "Index: " << result[0] << " " << result[1] << endl;
    cout << "Difference: " << arr[result[1]] << " - " << arr[result[0]] << " = " << arr[result[1]] - arr[result[0]] << endl;

    return 0;
}