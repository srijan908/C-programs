#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int32_t i=0;i<n;i++)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;

    while(t--){
        int32_t n;cin>>n;
        vector<int>s(n);
        int i;
        fo(i,n){
            cin>>s[i];
        }
        
        unordered_map<int,int> f;
        fo(i,n){
            if(f.find(s[i])==f.end()){
                f.insert(make_pair(s[i],0));
            }
            else{
                f[s[i]]++;
            }
        }

        fo(i,n){
            int len = (n-i);
            
            //cout<<len<<" ";
            bool x = false;
            for(auto& k:f){
                if(k.second==len){
                    cout<<k.first<<" "; 
                    x=true;
                }
            }
            if(x==false)
                cout<<"-1"<<" ";
        }
        cout<<"\n";
    }
    return 0;
}