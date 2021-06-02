#include<bits/stdc++.h>
using namespace std;
#define fo(n) for(long long i=0;i<n;i++)
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second

typedef long long ll;
typedef unsigned long long ull;
 
/* tt fun_ceil(tt n,tt k){
    if(n%k==0){
        return n/k;
    }
    else {
        tt x = (n/k)+1;
        return x;
    }
} */
//sort(s.begin(),s.end(),[](tt x, tt y){return abs(x)>abs(y);});
ull factorial(ull n) 
{ 
    if (n == 0) 
        return 1; 
    return n * factorial(n - 1); 
} 
void calc(){
    ull n;cin>>n;
    ull ans = factorial(n-1)/((n+1)/2);
    cout<<ans;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    calc();
    return 0;
}