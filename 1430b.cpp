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
        tt n,k;cin>>n>>k;
        vector<tt> s(n);
        tt i;
        fo(i,n){
            cin>>s[i];
        }
        sort(s.begin(),s.end(),greater<int>());
        tt sum = s[0];
        for(i=1;i<s.size();i++){
            if(k<1)
                break;
            sum+=s[i];
            k--;
        }
        cout<<sum<<endl;
    }
    return 0;
}