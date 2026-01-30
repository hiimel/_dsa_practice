#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n, x, y;
    cin >> m >> n >> x >> y;

    int numerator = m * y + n * x;
    int denominator = n * y;

    int result = __gcd(abs(numerator), abs(denominator));
    cout << numerator / result << "/" << denominator / result << endl;
    return 0;
}