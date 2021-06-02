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
    vector<ll> s(n);
    ll sum = 0;
    fo(i,0,n){
        ll temp;cin>>temp;
        temp = pow(temp,2);
        s[i] =temp;   
    }
    sort(all(s),greater<ll>());
    unordered_set<ll> k;
    fo(i,0,n){
        if(k.find(s[i])==k.end()){
            k.insert(s[i]);
        }
        else{
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
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