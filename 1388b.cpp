#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int32_t i=0;i<n;i++)

int fun_ceil(int n){
    if(n%4==0){
        return n/4;
    }
    else {
        int x = (n/4)+1;
        return x;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;

    while(t--){
        int32_t n;cin>>n;
        if(n==1){
            cout<<8;
        }
        else{
            int x = fun_ceil(n);
            for(int i=0;i<n-x;i++){
                cout<<9;
            }
            for(int i=0;i<x;i++){
                cout<<8;
            }
        }
        cout<<"\n";
    }
    return 0;
}