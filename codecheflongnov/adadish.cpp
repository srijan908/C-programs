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
    vector<int> s(n);
    int sum = 0;
    for(int i=0;i<n;i++){
        cin>>s[i];
        sum+=s[i];
    }
    if(n==1)
        cout<<s[0]<<endl;
    else if(n==2)
        cout<<max(s[0],s[1])<<endl;
    else{
        sort(all(s));                                                  
        int sum1 = s[n-1];
        int sum2 = s[n-2];
        for(int i=n-3;i>=0;i--){
            if(s[i]+sum2<=s[i]+sum1)
                sum2+=s[i];
            else 
                sum1+=s[i];
        }
        cout<<max(sum1,sum2)<<endl;
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t;cin>>t;

    while(t--){
        calc();
    }
    return 0;
}