#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
 
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
 
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vpii;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
#define ff first
#define ss second
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
#define endl '
'          
#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (b); i--)
 
const int MOD = 1e9 + 7;
const int MOD2 = 998244353;
const ll INF = 1e18;
const int MAXN = 2e5 + 5;
 
void fastio() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
#ifdef LOCAL
    #define debug(x) cerr << #x << " = " << (x) << endl;
    template<typename T>
    void printVec(vector<T>& v) { for (auto x : v) cerr << x << " "; cerr << endl; }
#else
    #define debug(x)
#endif
 
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
 
ll power(ll base, ll exp, ll mod = MOD) {
    ll result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp & 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return result;
}
 
ll modInverse(ll a, ll mod = MOD) {
    return power(a, mod - 2, mod);  
}
 
ll modAdd(ll a, ll b, ll mod = MOD) { return ((a % mod) + (b % mod) + mod) % mod; }
ll modSub(ll a, ll b, ll mod = MOD) { return (((a % mod) - (b % mod)) % mod + mod) % mod; }
ll modMul(ll a, ll b, ll mod = MOD) { return ((a % mod) * (b % mod)) % mod; }
 
 
void solve() {
        int a,b,n;
        cin >> n>>a>>b;
        vector<int> arr;
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            arr.push_back(k);
        }
        ll cost = 0;
        int p = 0;
        for(int i = 0 ; i<n ; i++){
            cost += (ll)b*(ll)(arr[i]-p);
            int k = n - i - 1 ;
            if (1LL * a <= 1LL * (n - i - 1) * b) {
                cost += 1LL * a * (arr[i] - p);
                p = arr[i];
            }
        }
        cout<<cost<<endl;
 
}
int main() {
    fastio();
 
    int t ;
    cin >> t;         
    while (t--) {
        solve();
    }
 
    return 0;
}