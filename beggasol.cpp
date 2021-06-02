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
    int n;cin>>n;
    vector<int> s(n);
    for(int i=0;i<n;i++)
        cin>>s[i];
    if(s[0]==0){
        cout<<0<<endl;
        return 0;
    }
    int ans = 0;
    for(int i=1;i<n;i++){
        s[0]-=1;
        ans++;
        if(s[0]==0 and s[i]==0){
            break;
        }
        s[0]+=s[i];
    }
    cout<<ans+s[0]<<endl;
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