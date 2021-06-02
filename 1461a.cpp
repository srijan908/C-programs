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
    int n,k;cin>>n>>k;
    string s = "";
    int i;
    for(i=1;i<=k;i++)
        s+='a';
    int count=1;
    for(;i<=n;i++){
        if(count==1){
            s+='b';
            count=2;
            continue;
        }
        if(count==2){
            s+='c';
            count=3;
            continue;
        }
        if(count==3){
            s+='a';
            count=1;
            continue;
        }
    }
    
    cout<<s<<endl;
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