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
    
        vector<int> s(4);
        for(int i=0;i<4;i++)
            cin>>s[i];

        sort(s.begin(),s.end());
        if(s[3]>(s[0]+s[1]+s[2]))
            cout<<"No";
        else{
            if((s[3]+s[0]==s[1]+s[2]) || (s[3]+s[1]==s[0]+s[2]) || s[3]+s[2]==s[0]+s[1] || s[3]==s[1]+s[0]+s[2])
                cout<<"Yes";
            else   
                cout<<"No";
        }
    
    return 0;
}