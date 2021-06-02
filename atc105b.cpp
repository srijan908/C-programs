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

tt gcd(tt a, tt b){
    if(a==0)
        return b;
    return gcd(b%a,a);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;
    vector<tt> s(t);
    int i;
    fo(i,t){
        cin>>s[i];
    }
    tt ans = s[0];
    for(i=1;i<t;i++){
        ans = gcd(s[i],ans);
        if(ans==1)
            break;
    }
    cout<<ans;
    return 0;
}