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

    tt i, max =0,sum2=0;
    double sum=0;
    fo(i,t){
        tt temp;
        cin>>temp;
        if(max<abs(temp))
            max = abs(temp);
        sum+=pow(temp,2);
        sum2+=abs(temp);
    }
    cout<<sum2<<endl;
    cout<<fixed<<setprecision(9)<<pow(sum,0.5)<<endl;
    cout<<max;
}