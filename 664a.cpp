#include<bits/stdc++.h>
using namespace std;
int calc(int n, int x){
    if(n<=2)
        return 1;
    
    int i,f=2;
    for(i=2;;i++){
        f += x;
        if(f>=n)
            return i;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;

    while(t--){
        int n,x;
        cin>>n>>x;

        cout<<calc(n,x)<<"\n";
    }
}