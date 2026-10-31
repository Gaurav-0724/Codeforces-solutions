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
        cin >> n;
 
        string s;
        cin>>s;
 
        unordered_set<char> st;
        vector<long long> pref(n+1,0);
        vector<long long> suf(n+1,0);
 
        for(long long i=0;i<n;i++){
            st.insert(s[i]);
            pref[i] = st.size();
        }
        st.clear();
        for(long long i=n-1;i>=0;i--){
            st.insert(s[i]);
            suf[i] = st.size();
        }
        long long count = 0;
        for(long long i=0;i<n-1;i++){
            if(pref[i]+suf[i+1] > count){
                count = pref[i] +suf[i+1];
            }
        }
 
        cout<<count<<"
";
 
    }
 
    
}