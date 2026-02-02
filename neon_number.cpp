#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int isSquare = n * n;
    int temp = isSquare;
    int sum = 0;
    while(temp > 0) {
        int lastDigit = temp % 10;
        sum += lastDigit;
        temp /= 10;
    } 

    if(sum == n) {
        cout << n << " is a Neon Number" << endl;
        cout << "Square is: " << isSquare << ", is equal to the sum of digits is: " << n << endl;
    } else {
        cout << n << " is not a Neon Number" << endl;
        cout << "Square isn't equal to the sum of digits" << endl;
    }

    return 0;
}