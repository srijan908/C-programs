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
    ll n;cin>>n;
    vii c0,c1,c2;
    ll x = n/3;
    ll k = x+2*x;
    fo(i,0,n){
        ll temp;cin>>temp;
        if(temp%3==0) c0.pb(temp);
        else if(temp%3==1) c1.pb(temp);
        else if(temp%3==2) c2.pb(temp);
    }

    int ans = 0;
    
    while(c1.size()>x or c2.size()>x or c0.size()>x){
        if(c2.size()>x){
            while(c2.size()>x){
                ll temp = c2.back();
                c0.pb(temp);
                c2.pop_back();
                ans++;
            }
        }

        if(c0.size()>x){
            while(c0.size()>x){
                ll temp = c0.back();
                c1.pb(temp);
                c0.pop_back();
                ans++;
            }
        }

        if(c1.size()>x){
            while(c1.size()>x){
                ll temp = c1.back();
                c2.pb(temp);
                c1.pop_back();
                ans++;
            }
        }
    }

    cout<<ans<<endl;
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