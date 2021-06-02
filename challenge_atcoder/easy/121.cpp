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
    /* int a,b;cin>>a>>b;
    if(b>=10)
        a*=100;
    else if(b>=100)
        a*=100
    else a*=10;
    a+=b;
    double s = pow(a,0.5);
    int k = (int) s;
    if(s-k!=0)
        cout<<"No";
    else cout<<"Yes"; */
    string s ,t;
    cin>>s>>t;
    int x = stoi(s+t);
    for ( int i =1; i <=1000; i ++){
        if ( i*i == x ){
            puts("Yes");
            return 0;
        }
    }
    puts("No");
    return 0;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    
        calc();
    
    return 0;
}