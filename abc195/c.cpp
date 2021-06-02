/*#include<bits/stdc++.h>
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
    int n;cin>>n;
    if(n<1000){
        cout<<0;
        return;
    }
    
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    
        calc();
    
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
//vector<int> dp(R,0);

vector<int> factors(int n){
    if(n==1){
        vector<int> s(1,0);
        return s;
    }
    vector<int> ans;
    for(int i=2;i*i<n;i++){
        if(n%i==0)
            ans.push_back(i);
        //cout<<1;
    }
    for(int i=sqrt(n);i>=1;i--){
        if(n%i==0)
            ans.push_back(n/i);
        //cout<<1;
    }
    return ans;
}

int fact(int n){
    for(int i=2;i<=n;i++){
        if(n%i==0)
            return i;
    }
    return -1;
}


bool isPrime(int n){
    if(n<=3)
        return true;
    if(n%2==0 or n%3==0)
        return false;

    for(int i=5;i*i<=n;i=i+6) {
        if(n%i==0 or n%(i+2)==0)
            return false;
    }

    return true;
}

long long f(int n){
    if(n==1)
        return 0;
    else if(isPrime(n))
        return 1;
    else{
        int x = fact(n);
        int y = n/x;

        return x*f(x) + y*f(y);
    }
}

long long strange_sum (int l, int r) {
   // Write your code here
   long long ans = 0;
   for(int i=l;i<=r;i++){
        if(isPrime(i)) {
            ans++;
            ans %= 998244353;
            //dp[i] = 1;
        }
        else {
            vector<int> divisor = factors(i);
            for(auto it:divisor){
                cout<<it<<" "<<f(it);
                ans += f(it);
                ans %= 998244353;
            }
        }
        //cout<<"\n";
   }
   return ans;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        int L;
        cin >> L;
        int R;
        cin >> R;

        long long out_;
        out_ = strange_sum(L, R);
        cout << out_;
        cout << "\n";
    }
}