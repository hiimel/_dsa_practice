#include <bits/stdc++.h>
using namespace std;

void checkDistinct(vector<int> &arr, int n) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(i == 0 || arr[i] != arr[i - 1]) {
            count++;
        }
    }

    cout << count << endl;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n); 
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    checkDistinct(arr, n);
    return 0;
}