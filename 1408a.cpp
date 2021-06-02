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
    vector<int> s(n*3);
    fo(i,0,n*3)
        cin>>s[i];
    vector<int>k(n);
    k[0]=(s[0]);
    int counter = 1;;
    for(int i=1;i<n-1;){
        if(s[counter]!=k[i-1]){
            k[i]=s[counter];
            i++;
        }
        else counter++;
    }
    /* for(i =1;i<n*3;i++){
        if(s[i]!=s[i-1])
            k.pb(s[i]);
        if(k.size()==n-1)
            break;
    }*/
    for(int i=0;i<n*3;i++){
        if(s[i]!=k[n-2] and s[i]!=k[0]){
            k[n-1] = s[i];
            break;
        }
    } 
    for(auto it:k)
        cout<<it<<" ";
    cout<<endl;
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