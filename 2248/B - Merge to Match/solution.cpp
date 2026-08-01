#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void fastio() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int n,m;
    cin>>n>>m;
 
    
 
     vector<int> a;
    for(int i=0;i<n;i++){
      int k;
      cin>>k;
      a.push_back(k);
    }
    vector<int> b;
    for(int i=0;i<m;i++){
      int l;
      cin>>l;
      b.push_back(l);
    }
    if(n<2*m){
      cout<<"NO
";
      return;
    }
 
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
 
    vector<int> cntLess(m);
    int p = 0;
    bool flag = true;
 
    for (int i = 0; i < m; i++) {
        while (p < n && a[p] < b[i]) p++;
        cntLess[i] = p;
        if (cntLess[i] < i + 1) { flag = false; break; }
    }
 
   
    if (flag) {
        for (int i = 0; i < m; i++) {
            int cntGreater = n - cntLess[i]; 
            if (cntGreater < m - i) { flag = false; break; }
        }
    }
 
    cout << (flag ? "YES" : "NO") << "
";
 
    
 
 
 
    
 
  }
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}