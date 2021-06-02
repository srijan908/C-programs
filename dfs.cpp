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
vector<vector<int>> adj;
vector<bool> visited;
void dfs(int n){
    if(visited[n]) return;
    visited[n] = true;
    for(auto it:adj[n]){
        cout<<it<<" ";
        dfs(it);
    }
}
void calc(){
    int n;cin>>n;
    adj.resize(n+1);
    visited.resize(n+1);
    for(int i=1;i<=n;i++){
        int a,b;cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    for(int i=0;i<=n;i++)
        visited[i]=false;
    dfs(1);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    
        calc();
    
    return 0;
}