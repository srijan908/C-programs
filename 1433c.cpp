#include<bits/stdc++.h>
using namespace std;
#define fo(n) for(long long i=0;i<n;i++)
#define endl "\n"
#define pb push_back

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
    vector<ll>s(n);bool x=false;
    vector<pair<ll,ll>>k;
    for(int i=0;i<n;i++){
        cin>>s[i];
        if(i>0 and (s[i]>s[i-1] or s[i]<s[i-1])){
            x=true;
            if(s[i]>s[i-1])
                k.pb(make_pair(s[i],i));
            else
                k.pb(make_pair(s[i-1],i-1));
        }
    }
    if(x==false)
        return -1;
    sort(k.begin(),k.end());
    return k[k.size()-1].second+1;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t;cin>>t;

    while(t--){
        cout<<calc()<<endl;
    }
    return 0;
}