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
    string s,p;cin>>s>>p;
    if(s==p)
        cout<<"Yes"<<endl;
    else{
        pair<int,int>x;
        pair<int,int>y;
        x.first = 0,x.second = 0;
        y.first = 0,y.second = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='0')
                x.first++;
            else if(s[i]=='1') x.second++;

            if(p[i]=='0')
                y.first++;
            else if(p[i]=='1')
                y.second++;
        }
        if(x.first==y.first and x.second==y.second)
            cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
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