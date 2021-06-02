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
ll dp[4020][4020];
ll pref[4020];

ll finddp(ll idx,ll taken,ll n,ll t,vector<ll> &s){
    if(taken>=t and (pref[idx]-taken>=t)) return 0;
    else if(idx>=n) return 1e10;
    else if(dp[idx][taken]!=-1) return dp[idx][taken];

    ll x = finddp(idx+1,min(taken+s[idx],pref[idx]-taken),n,t,s);
    ll y = finddp(idx+1,min(pref[idx]-taken+s[idx],taken),n,t,s);

    return dp[idx][taken] = 1+min(x,y);
}

int soln(vector<ll>&s,ll n,ll k){
    for(int i=0;i<n/2;i++)
        swap(s[i],s[n-i-1]);
    for(int i=0;i<=n+10;i++){
        pref[i] = 0;
        for(int j=0;j<=k+10;j++)
            dp[i][j] = -1;
    }
    for(int i=1;i<=n;i++) pref[i] = pref[i-1]+s[i-1];
    ll ans = finddp(0,0,n,k,s);
    return ans>1e9?-1:ans;
}

void calc(){
    ll n,k;cin>>n>>k;
    vector<ll>s(n,0);
    for(int i=0;i<n;i++)
        cin>>s[i];
    if(n==1){
        cout<<-1<<endl;
        return;
    }
    sort(all(s));
    cout<<soln(s,n,k)<<endl;
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