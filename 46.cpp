//Swastik pattern
// q46_swastik.cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;               // choose an odd size (e.g. 7)
    if (n < 3 || n % 2 == 0) {
        cout << "Please enter an odd integer >= 3\n";
        return 0;
    }

    int mid = n / 2;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            bool star = false;
            if (i == 0) {
                // top row: star at first column and a right horizontal arm
                if (j == 0 || j >= mid) star = true;
            } else if (i < mid) {
                // upper-left vertical arm and center vertical column
                if (j == 0 || j == mid) star = true;
            } else if (i == mid) {
                // full middle row
                star = true;
            } else if (i < n - 1) {
                // lower-right vertical arm and center vertical column
                if (j == mid || j == n - 1) star = true;
            } else { // last row
                // bottom row: left horizontal arm and rightmost star
                if (j <= mid || j == n - 1) star = true;
            }

            if (star) cout << "* ";
            else cout << "  ";
        }
        cout << "\n";
    }
    return 0;
}
