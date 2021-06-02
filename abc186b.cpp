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
    int h,w;cin>>h>>w;
    int sum = 0;
    int min = 1e9;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            int temp;cin>>temp;
            sum+=temp;
            if(temp<min)
                min = temp;
        }
    }
   
    int t = sum-min*(h*w);
    cout<<t;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    
        calc();
    
    return 0;
}