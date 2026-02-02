#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while(n > 9) {
        int sum = 0;
        int temp = n;

        while(temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
        
        n = sum;
    }

    // digitRoot formula = 1 + (n - 1) % 9;

    cout << n << endl;
    return 0;
}