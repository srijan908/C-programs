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
    /* if(n%2==0){
        int k=9;
        for(int i=0;i<n/2+1;i++){
            cout<<k;
            if(k==0)
                k=10;
            k--;
        }
        k+=2;
        for(int i=0;i<n/2-1;i++){
            if(k==10)
                k=0;
            cout<<k;
            k++;
        }
    }
    else{
        int k = 9;
        for(int i=0;i<n/2+1;i++){
            cout<<k;
            if(k==0)
                k=10;
            k--;
        }
        k+=2;
        for(int i=0;i<n/2;i++){
            if(k==10)
                k=0;
            cout<<k;
            k++;
        }
    } */
    if(n==1)
        cout<<9;
    else if(n==2)
        cout<<98;
    else{
        cout<<98;
        int k=9;
        for(int i=0;i<n-2;i++){
            if(k==10)
                k=0;
            cout<<k;
            k++;
        }
    }
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