/**
 * Author: Ian Kristona
 * Date: 6/13/2024
 * Problem: Heart rate
 * Link: https://open.kattis.com/problems/heartrate
*/

#include <iostream>

using namespace std;

int main() {
    int cases;
    cin >> cases;

    while(cases--) {
        double d1, d2;
        cin >> d1 >> d2;

        double ans = 60.0 * (d1 / d2);
        double var = 60.0 / d2;

        cout << fixed;
        cout.precision(4);
        cout << ans - var << " " << ans << " " << ans + var << endl;
    }
}