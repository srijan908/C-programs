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
bool check(int a){
    while(a>1){
        if(a%2!=0)
            return true;
        a/=2;
    }
    return false;
}
int calc(){
    int a,b,c;cin>>a>>b>>c;
    if(a%2!=0 or b%2!=0 or c%2!=0){
        cout<<0;
        return 0;
    }
    if((!check(a) and !check(b) and !check(c)) or (a==b and a==c)){
        cout<<-1;
        return 0;
    }
    int count = 0;
    while(true){
        if(a%2!=0 or b%2!=0 or c%2!=0){
            cout<<count;
            return 0;
        }
        int x = a/2;
        int y = b/2;
        int z = c/2;
        a = y+z;
        b = x+z;
        c = x+y;
        count++;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

  

   
        calc();
    
    return 0;
}