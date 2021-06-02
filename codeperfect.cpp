#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int32_t i=0;i<n;i++)


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;

    while(t--){
        int n;cin>>n;
        int sum =0;
        for(int i=1;i<n;i++){
            if(n%i==0)
                sum+=i;
        }
        if(sum==n)
            cout<<"YES"<<"\n";
        else 
            cout<<"NO"<<"\n";
    }
    return 0;
}