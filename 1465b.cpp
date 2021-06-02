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
    ll k = n;
    /* while(k>0){
        int temp = k%10;
        if(temp==0){
            k=k/10;
            continue;
        }
        if */
    ll l = 0;
    for(ll i=n;;i++){
        bool x = true;
        ll k = i;
        while(k>0){
            int temp = k%10;
            if(temp==0){
                k=k/10;
                continue;
            }
            if(i%temp!=0){
                x = false;
            }
            k=k/10;
        }
        if(x==true){
            cout<<i<<endl;
            return 0;
        }
    }
    return 0;
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