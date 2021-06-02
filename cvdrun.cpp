#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int32_t i=0;i<n;i++)

string calc(int n,int k,int x,int y){
    int original = x;
    while(true){
        x = (x+k)%n;
        if(x==y)
            break;
        else if(x==original)
            return "NO";
    }
    return "YES";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;

    while(t--){
        int n,k,x,y;
        cin>>n>>k>>x>>y;

        cout<<calc(n,k,x,y)<<"\n";
    }
    return 0;
}