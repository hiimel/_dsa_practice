#include<iostream>
using namespace std;

int closestNumber(int n, int m) {
    int x = n / m;
    int num1 = m * x;
    
    int num2;
    if(num1 > 0) {
        num2 = m * (x + 1);
    } else {
        num2 = m * (x - 1);
    }

    int a = abs(n - num1);
    int b = abs(n - num2);

    if(b > a) {
        return num1;
    }

    return num2;
}

int main() {
    int n, m;
    cin >> n >> m;

    cout << closestNumber(n, m) << endl;
    return 0;
}
