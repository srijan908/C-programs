#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int32_t i=0;i<n;i++)

int calc(int32_t n){
    int32_t sum = 1,i,steps=0;

    if(sum<pow(n,0.5)){
        sum+=(ceil(pow(n,0.5))-1);
        steps+=(sum-1);
    }
    
    while(sum<n){
        sum+=ceil(pow(n,0.5));
        steps+=1;
    }
    return steps;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;

    while(t--){
        int32_t n;cin>>n;

        cout<<calc(n)<<"\n";
    }
    return 0;
}