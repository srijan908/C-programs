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
    vector<int> k;
    while(n>0){
        if(n%2==0){
            k.push_back(0);
            n = n/2;
        }
        else{
            k.push_back(1);
            n = n/2;
        }
    }
    for(int i=k.size()-1;i>=0;i--){
        cout<<k[i];
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

        calc();

    return 0;
}