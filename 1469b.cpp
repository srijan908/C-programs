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
    vector<int> s;
    vector<int> r(n);

    for(int i=0;i<n;i++){
        cin>>r[i];
    }
    int m;cin>>m;
    vector<int> b(m);
  
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    
    s.pb(0);
    int counter = 0;
    int sum = 0;
    int x = 0, y =0;
    while(counter<n+m){
        if(r[x]>0){
            while(r[x]>=0 and x<n){
                sum+=r[x];
                s.pb(sum);
                x++;
                counter++;
            }
        }
        if(b[y]>=0 and y<m){
            while(b[y]>=0){
                sum+=b[y];
                s.pb(sum);
                y++;
                counter++;
            }
        }
        if(b[y]<0 and r[x]<0){
            while(b[y]<0 and r[x]<0 and (x<n or y<m)){
                sum+=(b[y]+r[x]);
                s.pb(sum);
                y++;
                x++;
                counter++;
            }
        }
    }
    sort(all(s));
    cout<<s[s.size()-1]<<endl;
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