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
    int n,m;cin>>n>>m;
    int arr[m][n]; int temp[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cin>>temp[i][j];
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            cin>>arr[i][j];
    }
    
    vector<int>order;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(temp[i][0]==arr[0][j])
                order.push_back(j);
        }
    }
    /* for(int i=0;i<n;i++)
        cout<<order[i]<<" ";
    cout<<endl; */
    int ans[n][m];
    for(int i=0;i<n;i++){
        int x = order[i];
        for(int j=0;j<m;j++){
            ans[x][j]=temp[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cout<<ans[i][j]<<" ";
        cout<<endl;
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