#include<bits/stdc++.h>
using namespace std;
#define fo(i,k,n) for(long long i=k;i<n;i++)
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second

typedef long long ll;

 ll fun_ceil(ll n,ll k){
if(n%k==0){
    return n/k;
}
else {
    ll x = (n/k)+1;
    return x;
}
} 
//sort(s.begin(),s.end(),[](tt x, tt y){return abs(x)>abs(y);});

void calc(){
    int n;cin>>n;
    int k = 0;
    int y = 0;
    vector<int> s(n);
    fo(i,0,n)
        cin>>s[i];
    sort(all(s));
    fo(i,1,n+1){
        if(i%2==0)
            y+=s[i-1];
        else k+=s[i-1];
    }

    cout<<abs(y-k);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    
        calc();
    
    return 0;
}