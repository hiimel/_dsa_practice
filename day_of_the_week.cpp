#include <bits/stdc++.h>
using namespace std;

int dayOfTheWeek(int d, int m, int yr) {
    static int monthCode[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};

    if(m < 3) {
        yr -= 1;
    }

    return (yr + yr / 4 - yr / 100 + yr / 400 + monthCode[m - 1] + d) % 7;
}

int main() {
    int day, month, year;
    cin >> day >> month >> year;

    int result = dayOfTheWeek(day, month, year);
    string days[] = {"Sunday", "Monday", "Tuesday",
        "Wednesday", "Thursday", "Friday", "Saturday"};

    cout << days[result] << endl;
    return 0;
}