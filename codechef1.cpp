#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int32_t i=0;i<n;i++)


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;

    while(t--){
        vector<int>s(3);
        int i;
        fo(i,3){
            cin>>s[i];
        }
        sort(s.begin(),s.end());
        cout<<s[1]<<"\n";
    }
    return 0;
}