#include <iostream>
#include <cmath>
using namespace std;

bool isPower(int n) {
    if(n <= 0) {
        return false;
    }

    double result = log2(n);
    return result == (int)result;
}

int main() {
    int n;
    cin >> n;

    if(isPower(n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
