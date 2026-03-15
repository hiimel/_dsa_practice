#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    cout << "ptr = " << ptr << "," << "*ptr = " << *ptr << endl;

    ptr++;
    cout << "After that ptr = " << ptr << ", *ptr = " << *ptr << endl;

    ptr++;
    cout << "Again after do that, ptr = " << ptr << ", *ptr = " << *ptr << endl;

    ptr--;
    cout << "ptr = " << ptr << ", *ptr = " << *ptr << endl;

    ptr--;
    cout << "ptr = " << ptr << ", *ptr = " << *ptr << endl;

    cout << "===============================" << endl;

    int arr2[3] = {1, 2 , 3};
    int *ptr2 = arr2;

    cout << "_difference: " << (ptr2 + 1) - ptr2 << "_unit" << endl;
    cout << "_byte difference: " << sizeof(int) << "_byte" << endl;
    return 0;
}   