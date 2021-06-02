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
    string s;cin>>s;
    vector<int> k;
    for(int i=0;i<s.length();i++){
        int temp = 0;
        if(s[i]=='A' or s[i]=='C' or s[i]=='G' or s[i]=='T'){
            while(s[i]=='A' or s[i]=='C' or s[i]=='G' or s[i]=='T'){
                temp++;
                i++;
            }
            k.pb(temp);
        }
    }
    sort(all(k));

    if(k.size()>=1)
        cout<<k[k.size()-1];
    else cout<<0;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

  

   
        calc();
    
    return 0;
}