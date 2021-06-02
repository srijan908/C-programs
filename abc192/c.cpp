#include<bits/stdc++.h>
using namespace std;
#define fo(i,k,n) for(long long i=k;i<n;i++)
#define endl "\n"
#define pb push_back
#define vii vector<ll>
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second

typedef long long ll;

ll fun_ceil(ll n,ll k){
    if(n%k==0){
        return n/k;
    }
    else {
        ll x = (n/k)+1;
        return x;
    }
} 

ll pw(ll n, ll pow, ll m){
    if(pow==0)return 1;
    if(pow%2 == 0){ll x = pw(n, pow/2, m);
        return (x*x)%m;}
    else return (pw(n, pow-1, m)*n)%m;
}
ll gcd(ll a, ll b) {
    if (!b)return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b) {
    return (a * b) / gcd(a, b);
}
ll fact(ll n, ll mod) {
    if (n > 1)
        return (n * fact(n - 1, mod)) % mod;
    else
        return 1;
}
bool isPrime(ll n) {
    if (n <= 3) {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    for (ll i = 5; i * i <= n; i = i + 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}
//sort(s.begin(),s.end(),[](tt x, tt y){return abs(x)>abs(y);});

ll num(ll n){
    vii s,k;
    while(n>0){
        s.pb(n%10);
        n/=10;
    }
    sort(all(s));
    k = s;
    reverse(all(k));

    ll x=0,y=0;

    fo(i,0,s.size()){
        x *= 10;
        x += s[i];
        y *= 10;
        y += k[i];
    }
    return y-x;    
}

void calc(){
    ll n,k;cin>>n>>k;

    for(ll i=0;i<k;i++){
       n = num(n);
    }
    cout<<n;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    
        calc();
    
    return 0;
}