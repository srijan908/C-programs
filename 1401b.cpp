#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int32_t i=0;i<n;i++)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;

    while(t--){
        int x1,y1,z1;cin>>x1>>y1>>z1;
        int x2,y2,z2;cin>>x2>>y2>>z2;

        int sum = 0,temp;
        /* 
        if(z1<z2 && z1<y2 && z2>y1){
            swap(z1,z2);
            swap(x1,x2);
            swap(y1,y2);
        } */
        temp = min(x1,z2);
        x1-=temp;z2-=temp;

        temp = min(y1,x2);
        y1-=temp;x2-=temp;

        temp = min(z1,y2);
        y2-=temp;z1-=temp;
        sum+=(2*temp);

        sum-=2*min(y1,z2);
        cout<<sum<<"\n";
    }
    return 0;
}