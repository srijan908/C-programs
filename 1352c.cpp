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

    int t;cin>>t;

    while(t--){
        tt n,k;cin>>n>>k;
        tt need = (k-1)/(n-1);
        printf("%d\n",need+k);
    }
    return 0;
}