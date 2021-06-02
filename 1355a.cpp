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
ll findMin(ll n){
    ll m = 1e18;
    while(n>0){
        ll temp = n%10;
        if(temp<m)
            m = temp;
        if(temp == 0)
            break;
        n = n/10;
    }
    return m;
}
ll findMax(ll n){
    ll m = 0;
    while(n>0){
        ll temp = n%10;
        if(temp>m)
            m = temp;
        if(temp == 9)
            break;
        n = n/10;
    }
    return m;
}
void calc(){
    ll a,k;cin>>a>>k;
    for(ll i=0;i<k-1;i++){
        ll temp =(findMax(a)*findMin(a));
        if(temp==0)
            break;
        a+=temp;
    }
    cout<<a<<endl;
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