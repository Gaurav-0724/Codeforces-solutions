#include<iostream>
#include<vector>
using namespace std;
int main(){
 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
 
        vector<int> arr;
 
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            arr.push_back(k);
        }
        long long sum=0;
        bool flag = true;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            long long need = (long long) (i+1)*(i+2)/2;
            if(sum<need){
                flag=false;
                break;
            }
            
        }
 
        if(flag) cout<<"YES"<<"
";
        else cout<<"NO"<<"
";
 
        
 
        
        
        
    }
}