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
void calc(){
    string s;cin>>s;
    char t1 = s[0];
    char t2 = s[s.length()-1];
    string temp1 = "";
    string temp2 = "";
    for(auto it:s){
        if(it==t1) temp1 += '(';
        else temp1 += ')';
    }

    for(auto it:s){
        if(it==t1 or it!=t2) temp2 += '(';
        else temp2 += ')';
    }

    stack<char> k,p;
    for(auto it:temp1){
        if(!k.empty() and k.top()=='(' and it==')')
            k.pop();
        else k.push(it);
    }
    if(k.empty()){
        cout<<"Yes"<<endl;
        return;
    }

    for(auto it:temp2){
        if(!p.empty() and p.top()=='(' and it==')')
            p.pop();
        else p.push(it);
    }
    if(p.empty()){
        cout<<"Yes"<<endl;
        return;
    }

    cout<<"No"<<endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t;cin>>t;

    while(t--){
        calc();
    }
    return 0;
}
/*
AA
AB
AC
BA
BB
BC
CA
CB
CC
AAAA
AAAB
AAAC
AABA
AABB
AABC
AACA
AACB
AACC
ABAA
ABAB
ABAC
ABBA
ABBB
ABBC
ABCA
ABCB
ABCC
ACAA
ACAB
ACAC
ACBA
ACBB
ACBC
ACCA
ACCB
ACCC
BAAA
BAAB
BAAC
BABA
BABB
BABC
BACA
BACB
BACC
BBAA
BBAB
BBAC
BBBA
BBBB
BBBC
BBCA
BBCB
BBCC
BCAA
BCAB
BCAC
BCBA
BCBB
BCBC
BCCA
BCCB
BCCC
CAAA
CAAB
CAAC
CABA
*/