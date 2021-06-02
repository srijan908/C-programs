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
    vector<int> s(t);
    for(int i=0;i<t;i++)
        cin>>s[i];

    vector<int>ans(t);
    
    for(int i=0;i<t;i++){
        unordered_set<int> k;
        int x =0;
        k.insert(s[i]);
        for(int j=0;;j++){
            if(k.find(x)==k.end()){
                ans.push_back(x);
                break;
            }
            x++;
        }
    }    

    for(int i=0;i<t;i++)
        cout<<ans[i]<<endl;

    return 0;
}