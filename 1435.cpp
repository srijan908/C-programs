#include<bits/stdc++.h>
using namespace std;
#define fo(n) for(long long i=0;i<n;i++)
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
    int n;cin>>n;
    vector<int> s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    vector<int>ans;
    for(int i=0;i<n-1;i+=2){
        int temp1 =s[i], temp2=s[i+1];

            if((temp1>0 and temp2>0) or (temp1<0 and temp2<0)){
                ans.push_back(-temp2);
                ans.push_back(temp1);
            }
            else{
                if(temp2<0){
                    ans.push_back(-temp2);
                    ans.push_back(temp1);
                }
                else{
                    ans.push_back(temp2);
                    ans.push_back(-temp1);
                }
            }
    }
    for(int i=0;i<n;i++)
        cout<<ans[i]<<" ";
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