#include<iostream>
#include <climits>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n), b(n);
 
        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;
 
        vector<int> freqA(2 * n + 1, 0);
        vector<int> freqB(2 * n + 1, 0);
 
        int len = 1;
 
        for (int i = 1; i < n; i++) {
            if (a[i] == a[i - 1]) {
                len++;
            } else {
                freqA[a[i - 1]] = max(freqA[a[i - 1]], len);
                len = 1;
            }
        }
        freqA[a[n - 1]] = max(freqA[a[n - 1]], len);
 
        len = 1;
 
        for (int i = 1; i < n; i++) {
            if (b[i] == b[i - 1]) {
                len++;
            } else {
                freqB[b[i - 1]] = max(freqB[b[i - 1]], len);
                len = 1;
            }
        }
        freqB[b[n - 1]] = max(freqB[b[n - 1]], len);
 
        int ans = 0;
 
        for (int x = 1; x <= 2 * n; x++) {
            ans = max(ans, freqA[x] + freqB[x]);
        }
 
        cout << ans << '
';
    }
 
    
}