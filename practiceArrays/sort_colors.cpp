#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int> &arr, int n) {
    int countZero = 0, countOne = 0, countTwo =0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) {
            countZero++;
        } else if(arr[i] == 1) {
            countOne++;
        } else {
            countTwo++;
        }
    }

    int idx = 0;
    for(int i = 0; i < countZero; i++) {
        arr[idx] = 0;
        idx++;
    }

    for(int i = 0; i < countOne; i++) {
        arr[idx++] = 1;
    }

    for(int i = 0; i < countTwo; i++) {
        arr[idx++] = 2;
    }
} 

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sortColors(arr, n);
    for(int i: arr) {
        cout << i << " ";
    }

    cout << endl;
    return 0;
}