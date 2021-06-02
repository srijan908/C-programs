#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int32_t i=0;i<n;i++)


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>>n>>k;
    vector<int> s(n);
    int ans=0,sum = 0;
    int i;
    fo(i,n){
        cin>>s[i];
    }
    
    set<int> z;
    for(i=0;i<n-1;i++){
        for(int j=i+1;j<n-1;j++){
            if(abs(s[i]-s[j])<=k){
                //cout<<s[i]<<" "<<s[j+1];
                z.insert(s[i]);
                z.insert(s[j]);
                i = j;
                //ans++; 
                break;
            }
        }
        //cout<<"\n";
    }
    
    cout<<z.size();
    return 0;
}