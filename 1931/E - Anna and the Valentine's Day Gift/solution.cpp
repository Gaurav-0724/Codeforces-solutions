#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
#define ll long long
 
int countDigit(int n,vector<int>& arr){
    
    int count=0;
    for(int i=0;i<n;i++){
        int cnt=0;
        int t = arr[i];
        while(t!=0){
            cnt++;
            t/=10;
        }
        count+=cnt;
    }
    return count;
 
}
 
void countZero(vector<int>& arr,int n,vector<pair<int ,int>>& v){
    for(int i=0;i<n;i++){
        int count=0;
        int t = arr[i];
        while(t%10==0){
            count+=1;
            t/=10;
 
        }
        v.push_back({count,arr[i]});
    }
 
}
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        int n,m;
        cin>>n>>m;
 
        vector<int> arr;
 
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            arr.push_back(k);
        }
 
        vector<pair<int ,int>> v;
 
        int digit = countDigit(n,arr);
 
        countZero(arr,n,v);
 
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
 
 
        int cnt=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                cnt+= v[i].first;
            }
        }
 
        if(digit-cnt>m) cout<<"Sasha"<<"
";
        else cout<<"Anna"<<"
";
 
    }
}