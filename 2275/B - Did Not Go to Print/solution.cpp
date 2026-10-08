#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
 
     while(t--){
        int n;
        
        string s;
        cin>> n >> s;
 
        vector<int> curr;
        vector<int> mark(n);
 
        for (int  i = 0; i < n; i++){
            char x = s[i];
 
            if(x=='1') {
                curr.push_back(i);
            } else if (x=='2' && !curr.empty()) {
                mark[curr.back()] =1;
                curr.pop_back();
            } else {
                mark[i] = 1;
            }
        }
 
        vector<int> res;
        for (int i = 0; i < n; i++) {
            if(mark[i] == 0) res.push_back(i+1);
        }
 
        cout<<res.size()<<endl;
        for(int x : res) cout<<x<<" ";
        cout<<endl;
     }
}