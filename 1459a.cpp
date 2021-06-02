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
    string s1,s2;cin>>s1>>s2;
    int b=0,r=0;

    for(int i=0;i<n;i++){
        if(s1[i]>s2[i])
            r++;
        else if(s1[i]<s2[i]) b++;
    }
    if(b==r)
        cout<<"EQUAL"<<endl;
    else if(b>r)
        cout<<"BLUE"<<endl;
    else cout<<"RED"<<endl;
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