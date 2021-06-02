#include<bits/stdc++.h>
using namespace std;
#define fo(i,k,n) for(long long i=k;i<n;i++)
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second

typedef long long ll;

/*ll fun_ceil(ll n,ll k){
    if(n%k==0){
        return n/k;
    }
    else {
        ll x = (n/k)+1;
        return x;
    }
}*/
//sort(s.begin(),s.end(),[](tt x, tt y){return abs(x)>abs(y);});
void calc(){
    ll n,w;cin>>n>>w;
    vector<ll>ans;
    ll already = 0;
    fo(i,0,n){
        ll x;cin>>x;
        if(already+x<=w){
            ans.pb(i+1);
            already+=x;
        }
        else if(x<=w and x>=((w+1)/2) ){
            ans = {i+1};
            already=x;
        }
    }
    if(already>=(w+1)/2){
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
    else cout<<-1<<endl; 
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