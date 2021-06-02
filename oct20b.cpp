#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int32_t i=0;i<n;i++)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;

    while(t--){
        int32_t n,k;cin>>n>>k;
        int64_t sum = 0;
        for(int i=0;i<n;i++){
            int64_t temp;
            cin>>temp;
            sum+=temp;
        }
        cout<<sum/k+1<<"\n";
    }
    return 0;
}