#include<iostream>
#include <climits>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
long long int MOD = 998244353;
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    
    while(t--){
        string s;
        cin>>s;
 
        
        int n = s.size();
        long long ans = 0;
        long long ways = 1;
        int len = 1;
 
        for (int i = 1; i < n; i++) {
            if (s[i] == s[i - 1]) {
                len++;
            } else {
                ans += len - 1;
                ways = ways * len % MOD;
                len = 1;
            }
        }
        ans += len - 1;
        ways = ways * len % MOD;
 
        for (int i = 1; i <= ans; i++) {
            ways = ways * i % MOD;
        }
        cout << ans << " " << ways << '
';
 
 
 
 
 
        
 
 
    }
}