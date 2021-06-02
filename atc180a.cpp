#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int32_t i=0;i<n;i++)
#define endl "\n"
#define pb push_back

typedef int64_t tt;
 
/* tt fun_ceil(tt n,tt k){
    if(n%k==0){
        return n/k;
    }
    else {
        tt x = (n/k)+1;
        return x;
    }
} */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,a,b;cin>>n>>a>>b;
    cout<<(n-a)+b;    
}