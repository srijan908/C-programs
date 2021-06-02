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
    ll n,k;cin>>n>>k;
    /* bool s[n*2+2];
    fo(i,0,n*2+2)
        s[i] = false;
    ll last;
    fo(i,0,k){
        ll temp;cin>>temp;
        s[temp-1] = true;
        last = k;
    }
    if(k==n){
        cout<<last<<endl;
        return;
    }
    ll cur = n-k;
    if(s[1]==false and s[0]==false){
        s[0] = true;
        cur--;
    }
    ll abc= 0;
    fo(i,1,n*2+2){
        if(s[i]==false and s[i-1]==false and s[i+1]==false){
            s[i] = true;
            cur--;
            abc = i+1;
            if(cur==0)
                break;
        }
    } */
    ll last;
    fo(i,0,k){
        ll temp;cin>>temp;
        last = temp;
    }
    if(n==k or n==1)
        cout<<last<<endl;
    else if(last==n*2){
        ll temp=n*2+2;
        cout<<temp;
    }
    else if(last==n*2-1){
        ll temp = n*2+1;
        cout<<temp<<endl;
    }
    else{
        cout<<min(last+(n-k)*2,n*2)<<endl;
    }
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