#include <iostream>
using namespace std;

int main() {
    long long int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int ans = 1;
        while (n > 3) {
            n /= 4;
            ans *= 2;
        }
        cout << ans << endl;
    }
    return 0;
}
