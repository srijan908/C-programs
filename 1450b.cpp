#include<bits/stdc++.h>
using namespace std;
#define fo(i,k,n) for(long long i=k;i<n;i++)
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second

typedef long long ll;

ll fun_ceil(ll n,ll k){
    if(n%k==0){
        return n/k;
    }
    else {
        ll x = (n/k)+1;
        return x;
    }
}

//sort(s.begin(),s.end(),[](tt x, tt y){return abs(x)>abs(y);});
int calc(){
    int n,k;cin>>n>>k;
    vector<pair<int,int>> s(n);
    for(int i=0;i<n;i++){
        cin>>s[i].first>>s[i].second;
    }
    for(int i = 0;i<n;i++){
        pair<int,int> l = s[i];
        bool x = true;
        for(int j=0;j<n;j++){
            if(j==i)
                continue;
            else if(abs(s[j].first-l.first)+abs(s[j].second-l.second)>k){
                x = false;
                break;
            }
        }
        if(x==true){
            cout<<1<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
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