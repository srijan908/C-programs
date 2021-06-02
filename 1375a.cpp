#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int32_t i=0;i<n;i++)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;

    while(t--){
        int32_t n;cin>>n;   
        vector<int> s(n);
        int i;
        fo(i,n){
            cin>>s[i];
        }

        fo(i,n){
            if(i%2==0 && s[i]<0)
                s[i]*=-1;
            else if(i%2!=0 && s[i]>0)
                s[i]*=-1;
        }
        
        fo(i,n){
            cout<<s[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}