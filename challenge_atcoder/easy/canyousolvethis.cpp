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
    int n,m,c;cin>>n>>m>>c;
    vector<int> b(m);
    int ans = 0;
    fo(i,0,m)
        cin>>b[i];
    for(int i=0;i<n;i++){
        int temp = 0;
        for(int i=0;i<m;i++){
            int a;cin>>a;
            temp+=(b[i]*a);
        }
        temp+=c;
        if(temp>0)
            ans++;
    }
    cout<<ans;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    
        calc();
    
    return 0;
}