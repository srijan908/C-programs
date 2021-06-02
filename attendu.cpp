//codechef cook off dec
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
    string s;cin>>s;
    int a = 0;
    int b = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='0')
            a++;
        else b++;
    }
    int c = 120-a;
    if(c==0)
        cout<<"NO"<<endl;
    else{
        double d = (c*100)/120;
        if(d>=75)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
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