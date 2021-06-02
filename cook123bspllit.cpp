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
        tt n;cin>>n;
        string s;cin>>s;
        queue<char>k;
        k.push(s[n-1]);bool x =false;
        for(int i=n-2;i>=0;i--){
            if(k.front()==s[i]){
                x=true;
                break;
            }
            else{
                k.push(s[i]);
            }
        }
        if(x==true)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
    return 0;
}