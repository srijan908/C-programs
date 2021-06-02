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
int calc(){
    ll n;cin>>n;
    vector<pair<ll,ll>> s(n);
    fo(i,0,n){
        cin>>s[i].first>>s[i].second;
    }
    if(n==1){
        cout<<s[0].first<<" "<<1;
        return 0;
    }
    sort(all(s));
    ll t = s[n-1].second;
    ll arr[t] = {0};
    fo(i,0,n){
        fo(j,s[i].first-1,s[i].second-1){
            arr[j]++;
        }
    }
    pair<ll,ll> ans;
    ans.first = 1e10;
    ans.second = 0;

    for(ll i=n-1;i>=0;i--){
        if(arr[i]>ans.second){
            ans.second = arr[i];
            ans.first = i;
        }
        else if(arr[i]>=ans.second){
            if(i<ans.first)
                ans.first = i;
        }
    }
    ans.first++;
    cout<<ans.first<<" "<<ans.second;
    return 0;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    
        calc();
    return 0;
}