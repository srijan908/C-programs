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

int factorial(int n) 
{ 
    return (n==1 || n==0) ? 1: n * factorial(n - 1);  
} 

void calc(){
    int n;cin>>n;
    set<pair<string,string>> s;
    set<string> k;
    fo(i,0,n){
        string temp;cin>>temp;
        k.insert(temp);
    }
    int num = 0;
    for(auto it:k){
        for(auto xy:k){
            if(it==xy) continue;
            if(it[0]==xy[0]) continue;
            char c = xy[0];
            xy[0] = it[0];
            it[0] = c;
            if(k.find(it)==k.end() and k.find(xy)==k.end())
                s.insert({it,xy}),num++;
        }
    }
    cout<<num<<endl;
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