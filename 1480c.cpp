#include<bits/stdc++.h>
using namespace std;
#define fo(i,k,n) for(long long i=k;i<n;i++)
//#define endl "\n"
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
void calc(){
    int n;cin>>n;
    if(n==1){
        int t;cin>>t;
        cout<<"? "<<1<<endl;
       
        cout<<"! "<<t<<endl;
      
        return;
    }
    if(n==2){
        vii s(2);
        fo(i,0,2){
            cin>>s[i];
            cout<<"? "<<i+1<<endl;
            
        }
        cout<<min(s[0],s[1])<<endl;
       
    }
    ll ans = 1e5;
    int m = 0;
    vector<int> s(n);
    for(int i=0;i<min(n,100);i++){
        cin>>s[i];
        cout<<"? "<<i+1<<endl;
        
    }
    for(int i=1;i<n-1;i++){
        if(s[i]<s[i-1] and s[i]<s[i+1] and s[i]<ans){
            ans = s[i];
            m = i+1;
        }
    }
    cout<<"! "<<m<<endl;
    
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    
        calc();
    
    return 0;
}