// Link: https://codeforces.com/problemset/problem/677/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, h;
    cin >> n >> h;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin  >> arr[i];
    }

    int min_width = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] <= h) {
            min_width += 1;
        } else {
            min_width += 2;
        }
    }

    cout << min_width << endl;
    return 0;
}