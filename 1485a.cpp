#include<bits/stdc++.h>
using namespace std;
#define fo(i,k,n) for(long long i=k;i<n;i++)
#define endl "\n"
#define pb push_back
#define vii vector<ll>
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
    int a,b;cin>>a>>b;
    int n = a;


    for(int i=1;;i++){
        int t1 = a;
        int t2 = b+i;
        int k = 0;
        while(t1>0){
            if(a==b){
                k+=1;
            }
            t1/=t2;
            k++;
        }
        k+=i;
        if(n>k){
            n = k;
        }
        else if(n<k){break;}
    }
    cout<<n<<endl;
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