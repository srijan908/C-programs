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
    int n,k;cin>>n>>k;
    vii s(n);
    fo(i,0,n)
        cin>>s[i];
    fo(i,0,k-1){
        bool x = false;
        fo(j,0,n-1){
            if(s[j]<s[j+1]){
                s[j]++;
                x=true;
                break;
            }
        }if(x==false){
            cout<<-1<<endl;
            return;
        }
    }
    for(int i=0;i<n-1;i++){
        if(s[i]<s[i+1]){
            cout<<i+1<<endl;
            return;
        }
    }
    cout<<-1<<endl;
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