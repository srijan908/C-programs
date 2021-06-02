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
void calc(){
    int n;cin>>n;
    int k = 0;
    vector<int> s(n);

    for(int i=0;i<n;i++){
        cin>>s[i];
        k+=s[i];
    }
    int y1 = k/n;
    int y2 = fun_ceil(k,n);
    int ans1 = 0;
    int ans2 = 0;
    for(int i = 0;i<n;i++){
        ans1+=pow((y1-s[i]),2);
        ans2+=pow((y2-s[i]),2);
    }
    cout<<min(ans1,ans2);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<ceil(4.1);
    
        //calc();
    
    return 0;
}