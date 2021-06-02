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
    int d1,v1,d2,v2,p;cin>>d1>>v1>>d2>>v2>>p;
    int k = 0;
    while(k<p){
        if(d1!=d2){
            if(d1<d2){
                d1++;
                k+=v1;
            }
            else{
                d2++;
                k+=v2;
            }
        }
        else{
            d1++,d2++;
            k+=v1+v2;
        }
    }
    cout<<min(d1,d2)-1;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    
        calc();
    
    return 0;
}