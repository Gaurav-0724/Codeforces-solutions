#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void fastio() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
 
    int n;
    cin>>n;
 
    vector<int> v;
    for(int i=0;i<2*n;i++){
      int k;
      cin>>k;
      v.push_back(k);
    }
 
    map<ll , vector<ll>>mp;
 
    for(int i=0;i<2*n;i++){
      mp[v[i]].push_back(i);
    }
 
    vector<ll> dp(2*n,0);
    dp[0] =1;
    for(int i=1;i<2*n;i++){
      dp[i] = dp[i-1]+1;
      ll l =mp[v[i]][0],r = mp[v[i]][1];
      if(r==i){
        ll left = (l-1==-1) ? 0 : dp[l-1];
        dp[i] = max(dp[i], (r-l+1)*(r-l+1)+left);
 
      }  
 
    }
    cout<<dp[2*n-1]<<"
";
 
   
  
 
 
    
 
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}