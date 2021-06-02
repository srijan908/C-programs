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
    double n;cin>>n;
    vector<double> s(n);
    cin>>s[0];
    int ans = 0;
    fo(i,1,n){ 
        cin>>s[i];
        double t = max(s[i],s[i-1])/min(s[i],s[i-1]);
        if(t>2){ 
            //cout<<'y'<<" ";
            int t =(int) min(s[i],s[i-1]);
            while(t<max(s[i],s[i-1])){
                t*=2;
                if(t>=max(s[i],s[i-1])) break;
                ans++;
            }
        }
    }
    //for(auto it:dif) cout<<it<<" ";
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