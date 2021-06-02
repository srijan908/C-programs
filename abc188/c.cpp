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
    vector<pair<int,int>> s(n),k(n);
    int i;
    for(i=0;i<n;i++){
        cin>>s[i].first;
        s[i].second = i+1;
    }
    for(;i<2*n;i++){
        cin>>k[i].first;
        k[i].second = i+1;
    }
    sort(all(s));
    sort(all(k));
    cout<<(k[n-1].first>s[n-1].first?s[n-1].second:k[n-1].second);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    
        calc();
    
    return 0;
}