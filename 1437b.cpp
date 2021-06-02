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
int calc(){
    int n;cin>>n;
    string s;cin>>s;
    int zeros=0,num1=0,ones=0,num2=0;
    fo(i,1,n){
        if(s[i]=='1' and s[i-1]=='1')
            num1++;
        else{
            ones+=num1;
            num1=0;
        }
        if(s[i]=='0' and s[i-1]=='0')
            num2++;
        else{
            zeros+=num2;
            num2=0;
        }
    }
    ones+=num1;
    zeros+=num2;
    cout<<max(ones,zeros)<<endl;
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