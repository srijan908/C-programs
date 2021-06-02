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
int calc(){
    char s[101];cin>>s;
    for(int i=1;s[i]!='\0';i++){
        if(s[i]>=97){
            cout<<s;
            return 0;
        }
    }
    if(s[0]>=97){
        s[0] = 65+(abs(97-s[0]));
    }
    else{
        s[0] = 97+(abs(65-s[0]));
    }
    for(int i=1;s[i]!='\0';i++){
        if(s[i]<97){
            s[i] = 97+(abs(65-s[i]));
        }
    }
    cout<<s;
    return 0;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    
        calc();
    
    return 0;
}