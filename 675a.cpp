#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int32_t i=0;i<n;i++)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;

    while(t--){
        int64_t a,b,c;cin>>a>>b>>c;
        vector<int64_t>s;
        s.push_back(a);
        s.push_back(b);
        s.push_back(c);
        sort(s.begin(),s.end());
        cout<<s[2]+1<<"\n";
    }
    return 0;
}