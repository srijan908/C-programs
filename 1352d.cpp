#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int32_t i=0;i<n;i++)
#define endl "\n"
#define pb push_back

typedef int64_t tt;
 
/* tt fun_ceil(tt n,tt k){
    if(n%k==0){
        return n/k;
    }
    else {
        tt x = (n/k)+1;
        return x;
    }
} */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;

    while(t--){
        int n;
		cin >> n;
		vector<int> a(n);
		for (auto &it : a) cin >> it;
		int l = 0, r = n - 1;
		int suml = 0, sumr = 0;
		int cnt = 0, ansl = 0, ansr = 0;
		while (l <= r) {
			if (cnt % 2 == 0) {
				int nsuml = 0;
				while (l <= r && nsuml <= sumr) {
					nsuml += a[l++];
				}
				ansl += nsuml;
				suml = nsuml;
			} else {
				int nsumr = 0;
				while (l <= r && nsumr <= suml) {
					nsumr += a[r--];
				}
				ansr += nsumr;
				sumr = nsumr;
			}
			++cnt;
		}
		cout << cnt << " " << ansl << " " << ansr << endl;
    }
    return 0;
}