#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void fastio() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    string s;
    cin>>s;
 
    int n = s.size();
    string str = s;
    for(int i=0;i<n;i++){
      if(str[i]=='1'){
        str.erase(i,1);
        break;
      } 
    }
    for(int i=0;i<n;i++){
      if(str[i]=='0'){
        str.erase(i,1);
        break;
      } 
    }
    cout<<str<<"
";
 
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}