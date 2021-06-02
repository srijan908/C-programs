#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int> s(n);
        for(int i=0;i<n;i++)
            cin>>s[i];
        
        sort(s.begin(),s.end());
        int magic = 0;
        for(int i=1;i<n;i++){
            magic = magic+(k-s[i])/s[0];
        }
        cout<<magic<<"\n";
    }

    return 0;
}