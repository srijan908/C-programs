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
    set<int> s;
    s.insert(n);
    int ans;
    for(int i =0;;i++){
        int temp;
        if(n%2==0){
            n/=2;
            temp = n;
        }
        else{
            n = 3*n+1;
            temp = n;
        }
        if(s.find(temp)!=s.end()){
            ans = i+2;
            break;
        }
        else{
            s.insert(temp);
        }
    }
    cout<<ans;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

  

   
        calc();
    
    return 0;
}