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
    int n,d;cin>>n>>d;
    vector<int> s1;
    vector<int> s2;
    for(int i=0;i<n;i++){
        int t;cin>>t;
        if(t>=80 or t<=9)
            s1.pb(t);
        else s2.pb(t);
    }
    int ans = fun_ceil(s1.size(),d);
    ans+=fun_ceil(s2.size(),d);
    cout<<ans<<endl;
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