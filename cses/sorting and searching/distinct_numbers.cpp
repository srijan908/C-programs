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
    int n;cin>>n;
    vector<int> s(n);
    int ans = n;
    fo(i,0,n)
        cin>>s[i];
    sort(all(s));
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i-1])
            ans--;
    }
    if(s[0]==s[n-1])
        ans--;
    cout<<ans;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    

   
        calc();
    
    return 0;
}