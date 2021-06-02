#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int32_t i=0;i<n;i++)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;

    while(t--){
        int32_t n,x,p,k;cin>>n>>x>>p>>k;
        bool present = true;
        vector<int> s(n);
        int i;
        fo(i,n){
            cin>>s[i];
            if(s[i]==x)
                present = true;
        }

        if(present!=true){
            cout<<-1;
            continue;
        }
        
        fo(i,n){
            sort(s.begin(),s.end());
            if(s[p]==x){
                cout<<i;
            }
            
        }
    }
    return 0;
}