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
    string a,b;cin>>a>>b;
    if(a==b){
        cout<<0<<endl;
        return 0;
    }
    
    int ans = 0;
    int last = 0;
    int last2 = 0;
    vector<int> k,l;
    for(int i=0;i<a.length();i++){
        if(a[i]!=b[i] and (i+1)%2==0){           
            if(last==0){
                ans++;
            }
            else if(abs(last-(i+1))>2){
                ans++;
            }
            last=i+1;
        }   
        if(a[i]!=b[i] and (i+1)%2!=0){
            if(last2==0){
                ans++;
            }
            else if(abs(last2-(i+1))>2){
                //cout<<last2<<" "<<i;
                ans++;
                
            }
            last2=i+1;
        }   
    }
    cout<<ans<<endl;
    return 0;
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