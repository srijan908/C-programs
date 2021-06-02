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
    ll sum = 0;
    for(int i=0;i<n;i++){
        ll a,b;cin>>a>>b;
        ll temp1 = 0, temp2 = 0;
        a = a-1;
        if(a!=0)
            temp1 = (a*(a+1))/2;
        temp2 = (b*(b+1))/2;
        sum += temp2-temp1;
    }
    cout<<sum;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    
   
        calc();
    
    return 0;
}