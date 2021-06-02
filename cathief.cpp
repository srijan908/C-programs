//codechef cook off dec
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
int calc(){
    int x,y,k,n;cin>>x>>y>>k>>n;
    if(x<y){
        while(x<y){
            x+=k;
            y-=k;
            if(x==y){
                cout<<"Yes"<<endl;
                return 0;
            }
            if(x>y){
                cout<<"No"<<endl;
                return 0 ;
            }
        }
    }
    else{
        while(x>y){
            y+=k;
            x-=k;
            if(x==y){
                cout<<"Yes"<<endl;
                return 0;
            }
            if(x<y){
                cout<<"No"<<endl;
                return 0 ;
            }
        }
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