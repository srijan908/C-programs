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
    int n;cin>>n;
    vii s(n);
    fo(i,0,n) cin>>s[i];
    vii k(n);
    fo(i,0,n) cin>>k[i];

    int lis[n];

    fo(i,0,n){
        lis[i] = 1;
        fo(j,0,i){
            if(s[i]>s[j] and k[i]<k[j] and lis[i]<lis[j]+1)
                lis[i] = lis[j]+1;
        }
    }

    cout<<*max_element(lis,lis+n)<<endl;
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