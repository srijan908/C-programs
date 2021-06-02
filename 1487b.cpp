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
    ll n,hr;cin>>n>>hr;

    if(hr==1) cout<<1<<endl;
    else if(n%2==0){
        ll k=(n+hr)%n;
        if(k==0) cout<<n<<endl;
        else cout<<k<<endl;
    }
    else{
        ll k = n/2;
        if(hr<=k){
            cout<<hr<<endl;
        }
        else if(n==hr) cout<<2<<endl;
        else if(hr==k+1){
            cout<<k+2<<endl;
        }
        else{
            ll t = hr-k-1;
            ll a = t/k;
            ll x = k+t+a+2;
            if(x%n==0) cout<<n<<endl;
            else cout<<x%n<<endl;
        }
    }
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