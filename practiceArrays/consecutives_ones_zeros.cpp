#include <iostream>
using namespace std;

void consecutive_digits(int arr[],  int n) {
    int cnt = 1;
    int max_cnt = 1;

    for(int i = 0; i < n - 1; i++) {
        if(arr[i] == arr[i + 1]) {
            cnt++;
            max_cnt = max(max_cnt, cnt);
        } else {
            cnt = 1;
        }
    }

    cout << max_cnt << endl;
}

int main() {
    int arr[] = {0, 0, 0, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    consecutive_digits(arr, n);

    return 0;
}