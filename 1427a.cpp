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
        int n;cin>>n;
        vector<tt> s(n);
        tt sum = 0;
        int i;
        fo(i,n){
            cin>>s[i];
            sum+=s[i];
        }
        if(sum==0){
            cout<<"NO"<<endl;
            continue;
        }
        else{
            cout<<"YES"<<endl;
            if(sum<0){
                sort(s.begin(),s.end());
                fo(i,n)
                    cout<<s[i]<<" ";
                cout<<endl;
            }
            else {
                sort(s.begin(),s.end(),greater<int>());
                fo(i,n)
                    cout<<s[i]<<" ";
                cout<<endl;
            }
        }
    }
    return 0;
}