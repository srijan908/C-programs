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
    ll a,b,c;cin>>a>>b>>c;
    int ans1 = 0;
    int k = 0;
    int ans2 = 0;
    int l = 0;
    if(a<c)
        ans1 = 1;
    if(a*b>c){
        ans2 = b;
    }
    if(ans1==0)ans1=-1;
    if(ans2==0)ans2=-1;
    cout<<ans1<<" "<<ans2<<endl;
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