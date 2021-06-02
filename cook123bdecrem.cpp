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

    tt t;cin>>t;

    while(t--){
        tt l,r;cin>>l>>r;
        if((l==1 or r==1) or (r%l==0) or (r/l>=2)){
            cout<<-1<<endl;
            continue;
        }
        cout<<max(l,r)<<endl;
    }
    return 0;
}