#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int h;
        cin >> h;

        int mn = h, mx = h;

        for (int i = 1; i < n; i++) {
            cin >> h;

            if (h < mn) mn = h;
            if (h > mx) mx = h;
        }

        cout << mx - mn + 1 << "\n";
    }

    return 0;
}