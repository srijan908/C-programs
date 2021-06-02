#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int32_t i=0;i<n;i++)
#define endl "\n"

typedef int64_t tt;
 
/* tt fun_ceil(tt n,tt k){
    if(n%k==0){
        return n/k;
    }
    else {
        tt x = (n/k)+1;
        return x;
    }
} */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;

    while(t--){
        tt a,b,c,d;cin>>a>>b>>c>>d;
        if((a+b)%2==0){
            cout<<"Tidak "<<"Tidak"<<" ";
            if(b+c>0)
                cout<<"Ya"<<" ";
            else cout<<"Tidak"<<" ";

            if(a+d>0)
                cout<<"Ya"<<endl;
            else cout<<"Tidak"<<endl;
        }
        else {  
            if(a+d>0)
                cout<<"Ya"<<" ";
            else cout<<"Tidak "<<" ";
            
            if(b+c>0)
                cout<<"Ya"<<" ";
            else cout<<"Tidak"<<" ";

            cout<<"Tidak "<<"Tidak"<<endl;
        }
    }
    return 0;
}