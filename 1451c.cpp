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
    int n,k;cin>>n>>k;
    string a,b;cin>>a>>b;
    if(a==b){
        cout<<"Yes"<<endl;
        return 0;
    }
    int arr1[n];
    int arr2[n];
    for(int i=0;i<n;i++){
        arr1[a[i]-97]++;
        arr2[b[i]-97]++;
    }
    int a1=0,b1=0;
    for(int i=0;i<26;i++){
        if(arr1[i]>0) a1++;
        if(arr2[i]>0) b1++;
    }
    if(a1!=b1){
        cout<<"No"<<endl;
        return 0;
    }
    cout<<"Yes"<<endl;
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