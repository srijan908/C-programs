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
        ll a,b;cin>>a>>b;
        if(b==1) {
            cout<<"NO"<<endl;
            return;
        }
        ll x = a;
        ll y = a*b;
        ll z = a+(a*b);
       
            cout<<"YES"<<endl;
            cout<<x<<" "<<y<<" "<<z<<endl;
        
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
93 63
56 8
36 12
83 80
82 2
25 89
81 7
4 59
93 26
56 14
63 21
6 57
3 23
36 14
97 45
4 10
6 74
92 67
7 21
22 75
47 86
30 25
11 68
48 9
40 16
88 89
45 94
94 25
99 55
77 86
46 22
33 100
87 87
56 95
10 83
35 54
50 16
10 51
31 24
78 30
31 62
21 68
65 91
79 6
2 30
26 69
96 48
9 59
98 85
22 49
95 1
47 69
76 58
24 74
13 13
89 65
45 93
90 78
21 47
71 24
14 3
57 69
54 5
64 26
13 30
100 16
88 18
34 96
79 76
15 78
57 51
61 62
1 95
29 39
*/