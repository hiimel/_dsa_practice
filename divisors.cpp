#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if(n <= 1) {
        return false;
    }

    if(n == 2 || n == 3) {
        return true;
    }

    if(n % 2 == 0) {
        return false;
    }

    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            return false;
        }
    }

    return true;
}

bool is3Divisors(int n) {
    int root = (int)sqrt(n);

    if(root * root != n) {
        return false;
    }

    if(isPrime(root)) {
        return true;
    }

    return false;
}

int count3Divisors(int n) {
    int count = 0;
    for(int i = 2; i * i <= n; i++) {
        if(isPrime(i)) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;
    cin >> n;

    cout << count3Divisors(n) << endl;

    return 0;
}