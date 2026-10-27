#include<iostream>
#include <climits>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
int gcd(int x, int y){
    while(y!=0){
        x = x%y;
        swap(x,y);
    }
    return x;
}
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
 
    while(t--){
       long long n,x,y;
       cin>> n >> x >> y;
 
       long long l = (x*y)/gcd(x,y);
 
       long long a = n/x - n/l;
       long long b = n/y - n/l;
 
       long long positive = (a*(2*n-a+1))/2;
       long long negative = (b*(b+1))/2;
 
        cout<<positive-negative<<"
";
    }
 
}