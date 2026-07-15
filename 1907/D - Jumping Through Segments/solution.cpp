#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
 
bool check(int k,vector<pair<int,int>>& arr,int n){
    int ll=0,rr=0;
 
    for(int i=0;i<n;i++){
        ll = max(ll-k,arr[i].first);
        rr = min(rr+k,arr[i].second);
 
        if(ll>rr) return false;
    }
    return true;
}
int main() {
    ios::sync_with_stdio(false);
 
    cin.tie(nullptr);
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin>>n;
 
        vector<pair<int,int>> arr;
        for(int i=0;i<n;i++){
            int l,r;
            cin>>l>>r;
            arr.push_back({l,r});
        }
 
        int maxi= INT_MIN;
        for(int i=0;i<n;i++){
            maxi = max(maxi,arr[i].second);
        }
        int lo=0;
        int hi=maxi;
        int ans=0;
 
        while(lo<=hi){
            int mid= lo+(hi-lo)/2;
 
            if(check(mid,arr,n)){
                ans=mid;
                hi = mid-1;
 
            }
            else lo = mid+1;
        }
        cout<<ans<<"
";
 
    }
}