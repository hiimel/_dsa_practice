#include <bits/stdc++.h>
using namespace std;

bool doOverlap(int x1, int y1, int x2, int y2,
               int a1, int b1, int a2, int b2) {
    
    // x-axis
    if (x2 <= a1 || a2 <= x1) {
        return false;
    }
        
    // y-axis
    if (y2 <= b1 || b2 <= y1) {
        return false;
    }
        
    return true;
}

int area(int x1, int y1, int x2, int y2,
         int a1, int b1, int a2, int b2) {
            
    int xAxis = min(x2, a2) - max(x1, a1);
    int yAxis = min(y2, b2) - max(y1, b1);

    if(xAxis <= 0 || yAxis <= 0) {
        return 0;
    }

    return xAxis * yAxis;
}

int main() {
    int x1 = 0, y1 = 0;  
    int x2 = 10, y2 = 10; 
    
    int a1 = 5, b1 = 5;   
    int a2 = 15, b2 = 15; 
    
    if (doOverlap(x1, y1, x2, y2, a1, b1, a2, b2)) {
        cout << "Rectangles overlap" << endl;
        cout << "Area is: " << area(x1, y1, x2, y2, a1, b1, a2, b2) << endl;
    } else {
        cout << "Rectangles do not overlap" << endl;
        cout << "Area is: 0" << endl;
    }

    // individual area
    int recArea1 = (x2 - x1) - (y2 - y1);
    int recArea2 = (a2 - a1) * (b2 - b1);

    cout << "Rectangle1 Area is: " << recArea1 << endl;
    cout << "Rectangle2 area is: " << recArea2 << endl;

    return 0;
}