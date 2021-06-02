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

ll gcd(ll a, ll b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 

ll findGCD(vector<ll>arr,int n){
    ll result = arr[0];
    for(int i=1;i<n;i++){
        result = gcd(arr[i],result);
        if(result==1)
            return 1;
    }
    return result;
}

int calc(){
    int n,j;cin>>n>>j;
    vector<ll> s(n);
    vector<ll> k(j);
    for(int i=0;i<n;i++)
        cin>>s[i];
    for(int i=0;i<j;i++)
        cin>>k[i];

    if(n==1){
        for(int i=0;i<j;i++){
            cout<<s[0]+k[i]<<" ";
        }
        cout<<endl;
        return 0;
    }
    
    vector<ll> sub;
    for(int i=1;i<n;i++){
        ll temp = abs(s[i]-s[0]);
        sub.pb(temp);
    }
    
    ll gcd_sub = findGCD(sub,sub.size());
    for(int i = 0;i<j;i++){
        cout<<gcd(s[0]+k[i],gcd_sub)<<" ";
    }
    return 0;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    
        calc();
    
    return 0;
}