#include <bits/stdc++.h>
 
using namespace std;
 
using pii = pair<int, int>;
using lli = long long int;
 
#define debug(args...) //fprintf(stderr, args)
#define pb push_back
#define all(xs) xs.begin(), xs.end()
 
const lli INF = 2e18;
 
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		vector<int> xs;
		for (int i = 0; i < n; ++i) {
			int x;
			scanf("%d", &x);
			xs.pb(x);
		}
 
		sort(all(xs));
 
		lli maxi = -INF;
		maxi = max(maxi, 1LL*xs[n-1]*xs[n-2]*xs[n-3]*xs[n-4]*xs[n-5]);
		debug("-> %lld\n", maxi);
		maxi = max(maxi, 1LL*xs[0]*xs[1]*xs[2]*xs[3]*xs[n-1]);
		debug("-> %lld\n", maxi);
		maxi = max(maxi, 1LL*xs[0]*xs[1]*xs[n-3]*xs[n-2]*xs[n-1]);
 
		printf("%lld\n", maxi);
	}
}