#include<bits/stdc++.h>
using namespace std;
#define fo(i,k,n) for(long long i=k;i<n;i++)
#define vii vector<ll> 
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
    vii s(n);
    fo(i,0,n)
        cin>>s[i];
    int sum = 0;
    for(int i=1;i<n-1;i++){
        int temp = 0;
        if((s[i]>s[i-1] and s[i]>s[i+1]) or (s[i]<s[i-1] and s[i]<s[i+1])){
            while((s[i]>s[i-1] and s[i]>s[i+1]) or (s[i]<s[i-1] and s[i]<s[i+1]) and i<n-1){
                temp++;
                i++;
            }
            sum+=temp;
        }   
    }
    //cout<<sum<<" ";
    if(sum>3)
        cout<<sum-3<<endl;
    else cout<<0<<endl;
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