#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int num) {
    long long left = 1;
    long long right = num;

    while(left <= right) {
        long long mid = left + (right - left) / 2;
        long long square = mid * mid;

        if(square == num) {
            return true;
        } else if(square > num) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return false;
}

int main() {
    int n;
    cin >> n;

    if(isPerfectSquare(n)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}