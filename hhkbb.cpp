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


    int h,w;
    cin>>h;
    cin>>w;
    vector<string> s;
    for(int i=0;i<h;i++){
        string temp;
        cin>>temp;
        
        s.push_back(temp);
    }

    int ans=0;

    for(int i=0;i<h-1;i++){
        for(int j=0;j<w-1;j++){
            if(s[i][j]=='.' && s[i][j+1]=='.')
                ans++;
            if(s[i][j]=='.' && s[i+1][j]=='.')
                ans++;
        }
    }


    for(int i=0;i<h-1;i++){
        if(s[i][w-1]=='.' && s[i+1][w-1]=='.')
            ans++;
    }


    for(int j=0;j<w-1;j++){
        if(s[h-1][j]=='.' && s[h-1][j+1]=='.')
            ans++;
    }
    

    cout<<ans;

    return 0;
}