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
vector<vector<pair<ll,ll>>>adj;
vector<bool> visited;
vector<ll> dist;
void calc(){
    ll n,q,r;cin>>n>>q>>r;
    adj.clear();
    visited.clear();
    dist.clear();

    adj.resize(n);
    visited.resize(n);
    dist.resize(n);

    for(int i=0;i<n-1;i++){
        ll x,y,w;cin>>x>>y>>w;
        adj[x-1].pb({y-1,w});
        adj[y-1].pb({x-1,w});
    }


    for(int i=0;i<q;i++){
        ll u,v;cin>>u>>v;
        u--,v--;
        for(int i=0;i<n;i++){
            visited[i] = false;
            dist[i] = 1e9;
        }
        dist[u] = 0;
        priority_queue<pair<int,int>> q;
        q.push({0,u});
        bool found = false;
        while(!q.empty()){
            int a = q.top().second;
            q.pop();

            if(visited[a]) continue;
            visited[a] = true;

            for(auto it : adj[a]){
                int b = it.first, w =it.second;
                if(dist[a]+w<dist[b]){
                    dist[b] = dist[a]+w;
                    q.push({-dist[b],b});
                }
            }
        }
        cout<<dist[v]<<endl;
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