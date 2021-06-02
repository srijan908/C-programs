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

tt calc(tt n, string s){
    int i;
    if(n%2==0){
        for(i=2;i<=n;i+=2){
            int temp = (int) s[i-1];
            if(temp%2==0)
                return 2;
        }
        return 1;
    }
    else {
        for(i=0;i<n;i+=2){
            int temp = (int) s[i];
            if(temp%2!=0)
                return 1;
        }
        return 2;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;

    while(t--){
        tt n;cin>>n;
        string s;cin>>s;

        cout<<calc(n,s)<<endl;
    }
    return 0;
}