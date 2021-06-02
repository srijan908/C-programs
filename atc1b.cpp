#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int32_t i=0;i<n;i++)


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int64_t a,b,c,d;
    cin>>a>>b>>c>>d;
    
    if(c>a){
        if(b>=c)
            cout<<"Yes";
        else 
            cout<<"No";
    }
    else{
        if(d>=a){
            cout<<"Yes";
        }
        else 
            cout<<"No";
    }
    return 0;
}