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
    string s;cin>>s;
    if(s=="2020")
        cout<<"YES"<<endl;
    else{
        if(s[0]=='2' and s[1]=='0' and s[2]=='2' and s[3]=='0')
            cout<<"YES"<<endl;
        else if(n>4 and s[n-4]=='2' and s[n-3]=='0' and s[n-2]=='2' and s[n-1]=='0')
            cout<<"YES"<<endl;
        else{
            int k = 0;
            if(s[0]!='2')
                cout<<"NO"<<endl;
            else{
                if(s[0]=='2' and s[1]!='0'){
                    if(s[n-3]=='0' and s[n-2]=='2' and s[n-1]=='0')
                        cout<<"YES"<<endl;
                    else cout<<"NO"<<endl;
                }
                else if(s[0]=='2' and s[1]=='0' and s[2]!='2'){
                    if(s[n-2]=='2' and s[n-1]=='0')
                        cout<<"YES"<<endl;
                    else cout<<"NO"<<endl;
                }
                else if(s[0]=='2' and s[1]=='0' and s[2]=='2'){
                    if(s[n-1]=='0')
                        cout<<"YES"<<endl;
                    else cout<<"NO"<<endl;
                }
                else cout<<"NO"<<endl;
            }
        }
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