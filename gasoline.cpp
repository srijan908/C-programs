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
    for(ll i=0;i<n;i++)
        cin>>s[i].second;
    for(ll i=0;i<n;i++)
        cin>>s[i].first;
    sort(all(s));
    ll dist = 0;
    ll ans = 0;
    ll curr_cost = s[0].first;
    ll curr_capacity = s[0].second;
    ll counter = 0;
    while(dist<n){
        if(dist==curr_capacity or curr_capacity==0){
            while(s[counter].second==0 and counter<n)counter++;
            curr_cost = s[counter].first;
            curr_capacity = s[counter].second;
        }
        dist++;
        if(dist+1==n and ans+curr_cost>ans+s[counter+1].first){
            ans+=s[counter+1].first;
            break;
        }
        ans+=curr_cost;
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