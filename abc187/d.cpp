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
    vector<pair<ll,ll>> s(n);
    ll sum = 0;
    fo(i,0,n){
        cin>>s[i].first>>s[i].second;
        sum+=s[i].first;
    }
    sort(all(s));
    ll count=0;
    for(ll i=n-1;n>=0;i--){
        sum-=(s[i].first*2+s[i].second);
        count++;
        if(sum<0){
            cout<<count;
            return;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    
        calc();
    
    return 0;
}