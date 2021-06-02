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

    sort(all(s));

    int x = s[n-1];
    int z = s[n-2];
    int y = s[0];

    /* int m = 0;
    for(int i=1;i<n-1;i++){
        int temp = abs(x-s[i])+abs(s[i]-z)+abs(z-x);
        if(temp>m)
            m = temp;
    } */
    int m = abs(x-y)+abs(y-z)+abs(z-x);
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