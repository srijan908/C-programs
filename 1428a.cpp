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
        tt a1,b1,a2,b2;cin>>a1>>b1>>a2>>b2;
        tt x = abs(a2-a1);
        tt y = abs(b2-b1);
        if(b1==b2 or a1==a2)
            cout<<x+y<<endl;
        else
            cout<<x+y+2<<endl;
    }
    return 0;
}