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

        tt n1 = n-(k-1);
        if(n1>0 and n1%2==1){
            printf("YES\n");
            for(int i=0;i<k-1;i++) printf("1 ");
            printf("%d\n",n1);
            continue;
        }
        tt n2 = n-2*(k-1);
        if(n2>0 and n2%2==0){
            printf("YES\n");
            for(int i=0;i<k-1;i++) printf("2 ");
            printf("%d\n",n2);
            continue;
        }
        printf("NO\n");
    }
    return 0;
}