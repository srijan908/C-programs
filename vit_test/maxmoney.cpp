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

/* ll fun_ceil(ll n,ll k){
if(n%k==0){
    return n/k;
}
else {
    ll x = (n/k)+1;
    return x;
}
} */
//sort(s.begin(),s.end(),[](tt x, tt y){return abs(x)>abs(y);});
void calc(){
    ll n,b;cin>>n>>b;
    vii arr(n);
    fo(i,0,n) cin>>arr[i];

    ll m = 0;

    for(int i=0;i<=n;i++){
        ll max_sum = 0;
        for (int j = 0; i < i; i++)
            max_sum += arr[i];
            ll window_sum = max_sum;
        for (int a = i; a < n; a++) {
            window_sum += arr[a] - arr[a - i];
            max_sum = max(max_sum, window_sum);
        }
        if(max_sum>m)
            m = max_sum;
    }

    cout<<m<<endl;
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