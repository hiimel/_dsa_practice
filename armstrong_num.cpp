#include <bits/stdc++.h>
using namespace std;

int isPow(int base, int x) {
    int result = 1;
    while(x--) {
        result *= base;
    } 

    return result;
}

int main() {
    int n;
    cin >> n;

    if(n == 0) {
        cout << "0 is an Armstrong Number" << endl;
        return 0;
    }

    int digitCount = 0;
    int temp = n;
    while(temp != 0) {
        digitCount++;
        temp /= 10;
    }

    int sum = 0;
    int original = n;
    while(original != 0) {
        int digits = original % 10;
        sum += isPow(digits, digitCount);
        original /= 10;
    }

    if(sum == n) {
        cout << n << " is an Armstrong number" << endl;
    } else {
        cout << n << " is not an Armstrong number" << endl;
    }

    return 0;
}