#include <bits/stdc++.h>
using namespace std;

vector<int> twoValues(vector<int> &arr, int n, int x) {
    int left = 0; 
    int right = n - 1;

    while(left < right) {
        int sum = arr[left] + arr[right];

        if(sum == x) {
            return {left, right};
        } else if(sum < x) {
            left++;
        } else {
            right--;
        }
    }

    return {-1, -1};
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int x; 
    cin >> x;
 
    vector<int> result = twoValues(arr, n, x);
    if(result[0] == -1) {
        cout << "IMPOSSIBLE" << endl;
    } else {
        cout << result[0] + 1 << " " << result[1] + 1 << endl;
    }

    return 0;
}