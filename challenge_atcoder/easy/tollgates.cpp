#include<bits/stdc++.h>
using namespace std;
#define fo(i,k,n) for(long long i=k;i<n;i++)
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second

typedef long long ll;
/*
ll fun_ceil(ll n,ll k){
if(n%k==0){
    return n/k;
}
else {
    ll x = (n/k)+1;
    return x;
}
} 
*/
//sort(s.begin(),s.end(),[](tt x, tt y){return abs(x)>abs(y);});
void calc(){
    int n,m,x;cin>>n>>m>>x;
    int cost1 = 0, cost2 = 0;
    for(int i=0;i<m;i++){
        int temp;cin>>temp;
        if(temp>x)
            cost1++;
        else cost2++;
    }
    cout<<min(cost1,cost2);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

  

   
        calc();
    
    return 0;
}