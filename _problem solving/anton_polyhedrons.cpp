// Link: https://codeforces.com/problemset/problem/785/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    int totalFaces = 0;
    while(n--) {
        string s;
        cin >> s;

        int faces;
        if(s == "Tetrahedron") {
            faces = 4;
            totalFaces += faces;
        } else if(s == "Cube") {
            faces = 6;
            totalFaces += faces;
        } else if(s == "Octahedron") {
            faces = 8;
            totalFaces += faces;
        } else if(s == "Dodecahedron") {
            faces = 12;
            totalFaces += faces;
        } else {
            faces = 20;
            totalFaces += faces;
        }
    }

    cout << totalFaces << endl;
    return 0;
}