#include<bits/stdc++.h>
using namespace std;
#define fo(i,k,n) for(long long i=k;i<n;i++)
#define endl "\n"
#define pb push_back
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
    int n,k;cin>>n>>k;
    vector<int>s(n*k);
    ll m = (n-(n+1)/2);
    fo(i,0,n*k)
        cin>>s[i];
    ll sum = 0;
    for(int i  = 0;i<k;i++){
        sum+=s[n*k-(i+1)*(m+1)];
    }
    cout<<sum<<endl;
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