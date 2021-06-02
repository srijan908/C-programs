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
    int n,q;cin>>n>>q;
    vector<int> s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    vector<pair<int,int>> k(q);
    for(int i=0;i<q;i++){
        cin>>k[i].first;
        cin>>k[i].second;
    }
    vector<int>ans;
    for(int i=0;i<q;i++){
        s[k[i].first-1] = k[i].second;
        int temp = n;
        for(int i=0;i<n-1;){
            if(s[i]==s[i+1]){
                int temp2 = 0;
                while(s[i]==s[i+1]){
                    i++,temp2++;
                }
                if(temp2==0) continue;
                else 
                    temp-=temp2+1;
            }
            else i++;
        }
        ans.push_back(temp);
    }
    for(auto it:ans)
        cout<<it<<endl;
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