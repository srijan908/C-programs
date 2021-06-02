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
}  */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;

    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        vector<int>streaks;
        if(n==1){
            cout<<1<<endl;
            continue;
        }
        int i;
        fo(i,n){
            if(i==0 or s[i-1]!=s[i]) streaks.push_back(0);
            streaks.back()++;
        }
        tt ans = 0;
        //sort(streaks.begin(),streaks.end());
        int x = streaks.size();
        fo(i,x){
            tt temp = streaks[i];
            if(temp>1){
                ans+=1;
            }
            else if(temp==1) {
                ans+=1;
                if(i!=streaks.size()-1){
                    if(streaks[i+1]>1) streaks[i+1]--;
                    else 
                        if(streaks.back()>1)streaks.back()--;
                        else {
                            streaks.pop_back();
                            x--;
                        }
                }
            }
        }
        
        cout<<ans<<endl;
    }
    return 0;
}