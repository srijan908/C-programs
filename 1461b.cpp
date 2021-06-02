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
    vector<string> s(n);
    vector<pair<int,int>> k;
    int ans = 0;
    for(int i=0;i<n;i++){
        cin>>s[i];
        string temp = s[i];
        for(int j=0;j<m;j++){
            if(temp[j]=='*'){
                ans++;
                k.pb(make_pair(i,j));
            }
        }
    }
    cout<<"yes";
    int l = ans;
    for(int i=0;i<l;i++){
        bool no = true;
        int x = k[i].first+1;
        for(int j = 2;j<=x;j++){
            int temp = x+j-1;
            int y1 = k[i].second-j+1+1;
            int  y2 = k[i].second+j-1+1;
            string check = s[temp];
            for(int a = y1;a<=y2;a++){
                if(check[a-1]!='*'){
                    no = false;
                    break;
                }
            }
            if(no==false)
                break;
            ans++;
        }
    }
    cout<<ans<<endl;
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