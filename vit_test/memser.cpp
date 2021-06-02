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
    bool fail = false;
    bool ser = false;
    fo(i,0,n){
        string s;cin>>s;
        if(s=="start" && !ser){
            ser = true;
            continue;
        }

        if(s=="restart" && !ser){
            ser = true;
            continue;
        }
        else if(s=="restart" && ser)
            continue;

        if(s=="stop" && !ser){
            fail = true;
            continue;
        }
        else if(s=="stop" && ser){
            ser = false;
            continue;
        }
    }
    if(fail)cout<<"404"<<endl;
    else cout<<"200"<<endl;
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