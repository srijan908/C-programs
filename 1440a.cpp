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
    int n,c0,c1,h;cin>>n>>c0>>c1>>h;
    string s;cin>>s;
    int curr = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            if(h+c1<c0)
                curr+=h+c1;
            else curr+=c0;
        }
        else{
            if(h+c0<c1)
                curr+=h+c0;
            else curr+=c1;
        }
    }
    cout<<curr<<endl;
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