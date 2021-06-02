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
vector<vector<pair<ll,ll>>> adj;
void calc(){
    ll n,m;cin>>n>>m;
    adj.resize(n);
    for(int i=0;i<m;i++){
        ll x,y,w;cin>>x>>y>>w;
        x--,y--;
        adj[x].pb({y,w});
    }
    for(int i=0;i<n;i++){
        priority_queue<pair<ll,ll>> q;
        vector<ll> dist(n,1e18);
        dist[i] = 0;
        q.push({0,i});

        while(!q.empty()){
            ll cur = q.top().se;
            ll c = -q.top().fi;
            q.pop();

            if(c!=dist[cur]) continue; 

            for(auto it:adj[cur]){
                if(dist[cur]+it.se<dist[it.fi]){
                    dist[it.fi] = dist[cur]+it.se;
                    q.push({-dist[it.fi],it.fi});
                }
            }
        }
        ll ans = 1e18;
        for(int i=0;i<n;i++){
            for(auto it:adj[i]){
                int e = it.first;
                int w = it.second;
                if(e==i) ans = min(ans,dist[i]+w);
            }
        }
        if(ans==1e18) cout<<"-1"<<endl;
        else cout<<ans<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
        calc();
    return 0;
}

/* #pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<string.h>
#include<queue>

#ifdef LOCAL
#define eprintf(...) fprintf(stderr, __VA_ARGS__)
#else
#define NDEBUG
#define eprintf(...) do {} while (0)
#endif
#include<cassert>

using namespace std;

typedef long long LL;
typedef vector<int> VI;

#define REP(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define EACH(i,c) for(__typeof((c).begin()) i=(c).begin(),i##_end=(c).end();i!=i##_end;++i)

template<class T> inline void amin(T &x, const T &y) { if (y<x) x=y; }
template<class T> inline void amax(T &x, const T &y) { if (x<y) x=y; }
#define rprintf(fmt, begin, end) do { const auto end_rp = (end); auto it_rp = (begin); for (bool sp_rp=0; it_rp!=end_rp; ++it_rp) { if (sp_rp) putchar(' '); else sp_rp = true; printf(fmt, *it_rp); } putchar('\n'); } while(0)

int N, M;
vector<pair<int, int> > G[2011];

LL D[2011];

void MAIN() {
    scanf("%d%d", &N, &M);
    REP (i, M) {
	int x, y, c;
	scanf("%d%d%d", &x, &y, &c);
	x--; y--;
	G[x].emplace_back(y, c);
    }

    REP (s, N) {
	memset(D, 0x3f, sizeof D);
	const int INF = D[0];
	D[s] = 0;
	priority_queue<pair<LL, int> > Q;
	Q.emplace(0, s);
	while (!Q.empty()) {
	    int v = Q.top().second;
	    LL cst = -Q.top().first;
	    Q.pop();
	    if (cst != D[v]) continue;

	    EACH (e, G[v]) {
		int w = e->first;
		LL tmp = cst + e->second;
		if (D[w] > tmp) {
		    D[w] = tmp;
		    Q.emplace(-tmp, w);
		}
	    }
	}

	LL ans = INF;
	REP (v, N) EACH (e, G[v]) {
	    int w = e->first;
	    int c = e->second;
	    if (w == s) amin(ans, D[v] + c);
	}

	if (ans == INF) puts("-1");
	else printf("%lld\n", ans);

    }

}

int main() {
    int TC = 1;
//    scanf("%d", &TC);
    REP (tc, TC) MAIN();
    return 0;
} */

