#include<iostream>
#include <climits>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
 
int gcd(int a, int b){
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}
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
        int mini = 0;
        for(int i=0 ; i<n; i++){
            if(arr[i]!=i+1){
                mini = gcd(mini, abs(arr[i]-(i+1)));
            }
        }
 
        cout<<mini<<"
";
    }
}