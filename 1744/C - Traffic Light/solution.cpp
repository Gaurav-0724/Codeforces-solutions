#include<iostream>
#include <climits>
#include<vector>
#include<algorithm>
#include<math.h>
#include <unordered_set>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        char c;
 
        cin>>n >> c;
 
        string s;
        cin>>s;
 
        string p = s+s;
        
        int indexg = -1;
        int ans =0;
 
        for(int i=2*n-1;i>=0;i--){
            if(p[i]=='g') indexg = i;
 
            if(i<n && p[i]==c){
                ans  = max(ans,indexg-i);
            }
            
        }
        
 
        cout<<ans<<"
";
 
    }
 
    
}