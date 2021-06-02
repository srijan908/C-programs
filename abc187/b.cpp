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
    vector<pair<double,double>> s(n);
    fo(i,0,n)
        cin>>s[i].first>>s[i].second;
    double ans = 0;
    fo(i,0,n){
        fo(j,i+1,n){
            double temp = (s[j].second-s[i].second)/(s[j].first-s[i].first);
            if(temp>=-1.0 and temp<=1.0)
                ans++;
        }
    }
    cout<<ans;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    
        calc();
    
    return 0;
}