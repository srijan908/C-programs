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
    ll n = 99999;
    vector<ll> s(n);
    for(int i=0;i<n;i++){
        s[i] = i+1;
    }
    //sort(all(s));
    vector<pair<ll,bool>> k(n);
    int l = 2;
    for(int i=0;i<n;i++){
        k[i].first = l;
        k[i].second = false;
        l+=2;
    }
    ll a = k[n-1].first+1;
    for(ll i=1;i<=n;i++){
        if(s[i-1]!=i){
            k[i-1].first = k[s[i-1]-1].first;
            k[s[i-1]-1].second = true;
        }
        else if(s[i-1]==i && k[i-1].second == false){
            k[i-1].first = a;
            a++;
        }
        if(k[i].first>4e6){
            cout<<"YES";
            break;
        }
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