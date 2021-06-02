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
        tt sum = 0,counter=0;
        while(n>0){
            if(n%4==0 and n>=8){
                if(counter%2==0)sum++;
                n-=1;
            }
            else if(n%2==0){
                if(counter%2==0)sum+=(n/2);
                n=(n/2);
            }
            else{
                if(n==0)
                    break;
                if(counter%2==0)sum+=1;
                n-=1;
            }
            counter++;
        }
        cout<<sum<<endl;
    }
    return 0;
}