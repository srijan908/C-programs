#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int32_t i=0;i<n;i++)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;

    while(t--){
        int n;cin>>n;
        vector<int> s(n);
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        vector<int> x;
        for(int i=0;i<n;i+=4){
            if(i+4<=n){
                int sum = s[i]+s[i+1]+s[i+2]+s[i+3];
                 if(sum>=2){
                    x.push_back(1);
                    x.push_back(1);
                }
                else{
                    x.push_back(0);
                    x.push_back(0);
                }
            }
            else{
                int sum = s[i]+s[i+1];
                if(sum==2){
                    x.push_back(1);
                    x.push_back(1);
                }
                else
                {
                    x.push_back(0);
                }
            }
        }
        cout<<x.size()<<"\n";
        for(int i = 0;i<x.size();i++)
            cout<<x[i]<<" ";
        cout<<"\n";
    }
    return 0;
}