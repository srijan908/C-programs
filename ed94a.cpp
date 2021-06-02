#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int32_t i=0;i<n;i++)


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;

    while(t--){
        int32_t n;cin>>n;
        string s;cin>>s;

        string ans = "";
        
        for(int i=0;i<n;i++){
            ans+=s[n-1];
        }
        cout<<ans<<"\n";
    }
    return 0;
}