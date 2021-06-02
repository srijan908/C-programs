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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;

    while(t--){
        tt n;cin>>n;
        cout<<2<<endl;
        cout<<n<<" "<<n-1<<endl;
        tt temp = n;
        for(tt i=0;i<n-2;i++){
            cout<<temp<<" "<<temp-2<<endl;
            temp--;
        }
    }
    return 0;
}