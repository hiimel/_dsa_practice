#include <bits/stdc++.h>
using namespace std;

void isIntersection(int a1, int b1, int a2, int b2,
                    int x1, int y1, int x2, int y2) {
    
    int inter_x1 = max(a1, x1);
    int inter_y1 = max(b1, y1);
    int inter_x2 = min(a2, x2);
    int inter_y2 = min(b2, y2);

    if(inter_x1 < inter_x2 && inter_y1 < inter_y2) {
        cout << "Intersection: (" << inter_x1 << "," << inter_y1 << ") to (" 
             << inter_x2 << "," << inter_y2 << ")" << endl;
        cout << "Area is: " << (inter_x2 - inter_x1) * (inter_y2 - inter_y1) << endl;
    } else {
        cout << "No Intersection" << endl;
        cout << "Area is: 0" << endl;
    }
}

int main() {
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;

    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    isIntersection(a1, b1, a2, b2, x1, y1, x2, y2);
    
    return 0;
}