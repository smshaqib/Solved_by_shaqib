#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int max_val = *max_element(a.begin(), a.end());
        int max_count = (n + 1) / 2;


        bool max_in_odd_position = false;

        for (int i = 0; i < n; i++) {
            if (a[i] == max_val && i % 2 == 0) {
                max_in_odd_position = true;
                break;
            }
        }

        if (n % 2 == 0 || max_in_odd_position) {
             cout << max_val + max_count << endl;
        }

        else {

            cout << max_val + max_count - 1 << endl;
        }
    }
}

int main() {
    solve();
    return 0;
}
