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
    string s;cin>>s;
    for(int i=1;i<=s.length();i++){
        if(i%2==0){
            if(s[i-1]=='z') s[i-1] = 'y';
            else s[i-1] = 'z';
        }
        else{
            if(s[i-1]=='a') s[i-1] = 'b';
            else s[i-1] = 'a';
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