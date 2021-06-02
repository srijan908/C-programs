#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int32_t i=0;i<n;i++)
#define endl "\n"

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>>n>>k;
    vector<int> s(n);
    int i;
    fo(i,n){
        cin>>s[i];
    }
    if(s[0]==0)
        cout<<0;
    else {
        int temp = s[k-1];
        
        for(i = 0;i<n;i++){
            if(s[i]<temp || s[i]<=0)
                break;
        }
        cout<<i;
    }
    return 0;
}