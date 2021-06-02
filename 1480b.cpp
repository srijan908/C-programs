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
    int a,b,n;cin>>a>>b>>n;
    vector<pair<int,int>> s(n);
    fo(i,0,n)
        cin>>s[i].fi;
    fo(i,0,n)
        cin>>s[i].se;

    sort(all(s));

    fo(i,0,n){
        if(b<=0){
            cout<<"No"<<endl;
            return;
        }
        int cur_pow = s[i].fi;
        int cur_hel = s[i].se;
        while(cur_hel>0){
            cur_hel-=a;
            b-=cur_pow;
            if(cur_hel>0 and b<=0){
                cout<<"No"<<endl;
                return;
            }
        }
    }

    cout<<"Yes"<<endl;
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