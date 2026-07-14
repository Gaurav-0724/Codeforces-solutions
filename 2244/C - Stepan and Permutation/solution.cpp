#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
 
int gc(int a, int b) {
 
    while (b != 0) {
 
        int rem = a % b;
 
        a = b;
 
        b = rem;
 
    }
 
    return a;
 
}
 
int main() {
    ios::sync_with_stdio(false);
 
    cin.tie(nullptr);
    int t;
    cin >> t;
 
    while (t--) {
 
        int n, x, y;
        cin >> n >> x >> y;
 
        int g = gc(x, y);
 
        bool ok = true;
 
        for (int i = 1; i <= n; i++) {
            int p;
            cin >> p;
 
            if ((i % g) != (p % g))
                ok = false;
        }
 
        cout << (ok ? "YES" : "NO") << '
';
    }
}