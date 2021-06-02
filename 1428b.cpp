#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int64_t i=0;i<n;i++)
#define endl "\n"
#define pb push_back

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

    tt t;cin>>t;

    while(t--){
        tt n;cin>>n;
        string s;cin>>s;
        vector<pair<bool,bool>> k(n);
        for(int i=0;i<n;i++){
            k[i].first=false;
            k[i].second=false;
        }

        for(int i=0;i<n;i++){
            if(s[i]=='-'){
                if(i==n-1){
                    k[i].first=true;
                    k[0].second=true;
                    k[i-1].second=true;
                }
                else if(i==0){
                    k[0].first=true;
                    k[2].second=true;
                    k[n-1].second=true;
                }
                else{
                    k[i].first=true;
                    k[i+1].second=true;
                    k[i-1].second=true;
                }
            }
            else if(s[i]=='>'){
                k[i].second=true;
                k[(i+1)%n].first=true;
            }
            else {
                k[(i+1)%n].second=true;
                k[i].first=true;
            }
        }
        tt sum=0;
        for(int i=0;i<n;i++){
            if(k[i].first==true and k[i].second==true)
                sum++;
        }
        cout<<sum<<endl;
    }
    return 0;
}