#include<bits/stdc++.h>
using namespace std;
#define fo(i,k,n) for(long long i=k;i<n;i++)
#define endl "\n"
#define pb push_back
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
    vector<pair<ll,ll>> s(n);
    for(int i=0;i<n;i++)
        cin>>s[i].first;
    for(int i=0;i<n;i++)
        cin>>s[i].second;
    
    sort(all(s));
    vector<ll>pref (n+1,0);
    pref[0] = 0;
    for(int i=1;i<=n;i++)
        pref[i] = s[i-1].second+pref[i-1];
    
    ll best = min(pref[n],s[n-1].first);
    for(int i=0;i<n;i++){
        best = min(best,max(pref[n]-pref[i+1],s[i].first));
    }
    cout<<best<<endl;
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