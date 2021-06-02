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

 ll fun_ceil(ll n,ll k){
if(n%k==0){
    return n/k;
}
else {
    ll x = (n/k)+1;
    return x;

} 
}
//sort(s.begin(),s.end(),[](tt x, tt y){return abs(x)>abs(y);});
void calc(){
    ll n,k;cin>>n>>k;
    if(n==1){
        cout<<k<<endl;
        return;
    }
    if(n==k){
        cout<<1<<endl;
        return;
    }
    if(n>k){
        if(n%k==0)  
            cout<<1<<endl;
        else cout<<2<<endl;
    }
    else{
        if(k%n==0)
            cout<<k/n<<endl;
        else cout<<k/n+1<<endl;
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