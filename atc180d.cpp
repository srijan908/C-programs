#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int64_t i=0;i<n;i++)
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

    tt x,y,a,b;cin>>x>>y>>a>>b;
    tt exp1 = 0,exp2=0;
        if(x*a<y){
            exp1=logb(y/x);
        }
        if(x+b<y){
            exp2=(y-x)/b;
        }
    cout<<max(exp1,exp2);
    return 0;
}