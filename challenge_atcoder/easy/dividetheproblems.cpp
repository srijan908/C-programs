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
    int n;cin>>n;
    int k = n/2;
    vector<int> s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    sort(all(s));
    int x = s[k]-s[k-1];
    cout<<x;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

  

   
        calc();
    
    return 0;
}