#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int i=0;i<n;i++)

int64_t calc(int64_t a,int64_t b,int64_t x, int64_t y, int64_t n){
    int64_t ans = INT64_MAX;
    for(int i=0;i<2;i++){
        int da = min(n,a-x);
        int db = min(n-da,b-y);  //n-da to find out if we can make anymore 
        ans = min(ans,(a-da)*(b-db));
        swap(a,b);
        swap(x,y);
    }
    
    //cout<<a<<" "<<b;
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;

    while(t--){
        int64_t a,b,x,y,n;
        cin>>a>>b>>x>>y>>n;
        
        cout<<calc(a,b,x,y,n)<<"\n";
    }
    return 0;
}