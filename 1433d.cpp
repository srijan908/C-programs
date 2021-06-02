#include<bits/stdc++.h>
using namespace std;
#define fo(n) for(long long i=0;i<n;i++)
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second

typedef long long ll;
 
/* tt fun_ceil(tt n,tt k){
    if(n%k==0){
        return n/k;
    }
    else {
        tt x = (n/k)+1;
        return x;
    }
} */
//sort(s.begin(),s.end(),[](tt x, tt y){return abs(x)>abs(y);});
int calc(){
    int n;cin>>n;
    vector<int> s(n);
    vector<pair<int,int>> k;int idx=-1;
    for(int i=0;i<n;i++)
        cin>>s[i];
    for(int i=1;i<n;i++){
        if(s[i]!=s[0]){
            idx=i;
            k.pb({1,i+1});
        }
    }
    if(idx==-1){
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i=1;i<n;i++){
        if(s[i]==s[0]){
            k.pb({idx+1,i+1});
        }
    }
    cout<<"YES"<<endl; 
    for(int i=0;i<k.size();i++){
        cout<<k[i].first<<" "<<k[i].second<<endl;
    }
    return 0;
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