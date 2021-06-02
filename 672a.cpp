#include<bits/stdc++.h>
using namespace std;

string calc(vector<int64_t> vols, int n){
    for(int i=0;i<n-1;i++){
        if(vols[i]<=vols[i+1])
            return "YES";
    }
    return "NO";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;

    while(t--){
        int n; cin>>n;
        vector<int64_t> vols(n);
        for(int i=0;i<n;i++)
            cin>>vols[i];
        
        cout<<calc(vols, n)<<"\n";
    }
    return 0;
}
