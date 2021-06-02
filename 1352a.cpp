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
    int x,y;cin>>x>>y;
    if(x==y){
        cout<<x*2<<endl;
        return 0;
    }
    if(x==0 or y==0){
        cout<<max(x,y)*2-1<<endl;
        return 0;
    }
    if(x==0 and y==0){
        cout<<0<<endl;
        return 0;
    }
    int k = max(x,y);
    cout<<k*2-1<<endl;
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