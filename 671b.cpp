#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int32_t i=0;i<n;i++)
#define endl "\n"

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

tt calc(tt n){
    tt ans = 0, i = 1;
    if(n==1)
        return 1;
    while(n>0){
        n = n -(i*(i+1))/2;
        if(n<0)
            break;
        ans++;
        i = (i*2)+1;
    }
    return ans; 
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;

    while(t--){
        tt n;cin>>n;
        
        cout<<calc(n)<<endl;
    }
    return 0;
}