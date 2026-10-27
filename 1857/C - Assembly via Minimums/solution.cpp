#include<iostream>
#include <climits>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
 
        vector<int>b;
 
        for(int i=1;i<= n*(n-1) /2 ;i++){
            int k;
            cin>>k;
 
            b.push_back(k);
        }
 
        sort(b.begin(),b.end());
 
        int index =0;
 
        for(int i=0;i<n-1;i++){
            cout<<b[index]<<" ";
            index += n-1-i;
        }
        cout<<1000000000<<"
";
 
 
    }
}