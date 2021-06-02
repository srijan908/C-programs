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
    string s;cin>>s;
    int res = 0;
    for(int i = 0;i<=s.length();i++){
        int cur = i;
        bool ok = true;
        for(int j=0;j<s.length();j++){
            res++;
            if(s[j]=='+')
                cur++;
            else 
                cur--;
            if(cur<0){
                
                ok = false;
                break;
            }
        }
        if(ok){
            
            break;
        }
    }
    cout<<res<<endl;
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