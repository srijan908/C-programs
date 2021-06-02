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
        string s;cin>>s;
        stack<char>k;
        k.push(s[0]);
        for(int i=1;i<s.length();i++){
            if(k.empty()!=true and s[i]=='B' and (k.top()=='A' or k.top()=='B')){
                k.pop();
                continue;
            }
            else if(s[i]=='B' and s[i+1]=='B'){
                i++;
                continue;
            }
            k.push(s[i]);//cout<<"pushing"<<endl;
        }
        cout<<k.size()<<endl;
    }
    return 0;
}