#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void fastio() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int n, k;
    cin >> n >> k;
 
    if (k > n - 2) {
        cout << -1 << "
";
        return;
    }
 
    int m = n - k;              // number of alternating blocks, m >= 2
    int half1 = (m + 1) / 2;    // # of '1' blocks  = ceil(m/2)
    int half0 = m / 2;          // # of '0' blocks  = floor(m/2)
 
    int count1 = (n + 1) / 2;   // target total '1's = ceil(n/2)
    int count0 = n / 2;         // target total '0's = floor(n/2)
 
    int x1 = count1 - half1;    // extra length given to one '1' block (>=0 always)
    int x0 = count0 - half0;    // extra length given to one '0' block (>=0 always)
 
    vector<int> sizes(m, 1);
    sizes[0] += x1;   // first '1' block absorbs x1
    sizes[1] += x0;   // first '0' block absorbs x0  (m>=2 guarantees index 1 exists)
 
    string s;
    s.reserve(n);
    for (int i = 0; i < m; i++) {
        char c = (i % 2 == 0) ? '1' : '0';
        s.append(sizes[i], c);
    }
 
    cout << s << "
";
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}