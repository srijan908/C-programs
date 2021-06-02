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
    int n,m;cin>>n>>m;
    vector<vector<int>> s(n);
    int x = 0,z=0;
    int sum = 0,k = 1e9;
    for(int i=0;i<n;i++){
        s[i].resize(m);
        for(int j=0;j<m;j++){
            cin>>s[i][j];
            if(s[i][j]<0){
                x++;
            }
            if(abs(s[i][j])<k)
                k = abs(s[i][j]);
            if(s[i][j]==0)
                z++;
            sum+=abs(s[i][j]);
        }
    }
    //cout<<k<<endl;
    if(x%2==0){
        cout<<sum<<endl;
    }
    else{
        if(z>0)
            cout<<sum<<endl;
        else 
            cout<<sum-2*k<<endl;
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