#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int32_t i=0;i<n;i++)

int32_t calc(int32_t p,int32_t f,int32_t x,int32_t y,int32_t s,int32_t w){
    if(s>w){
        swap(s,w);
        swap(x,y);
    }

    //first calculating how many weapons we will carry
    int weapons = 0;
    for(int s1=0;s1<=min(x,p/s);s1++){
        int a1 = min(y,(p-s1*s)/w);
        //calculating how many weapons our follower will carry
        int s2 = min(x-s1,(f/s));
        int a2 = min(y-a1,(f-s*s2)/w);
        weapons = max(weapons,s1+s2+a1+a2);
    }

    return weapons;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int32_t t;cin>>t;

    while(t--){
        int32_t p,f;cin>>p>>f;
        int32_t cnts,cntw;cin>>cnts>>cntw;
        int32_t s,w;cin>>s>>w;

        cout<<calc(p,f,cnts,cntw,s,w)<<"\n";
    }
    return 0;
}