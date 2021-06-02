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

    int t;cin>>t;
    vector<tt> s(t);
    tt i;
    fo(i,t){
        cin>>s[i];
    }

    if(t==2){
        if(s[0]==s[1])
            cout<<0<<endl;
        else cout<<2<<endl;
        return 0;
    }

    vector<tt> streaks;tt counter=0;
    fo(i,t){
        if(i==0 or s[i]!=s[i-1]){
            streaks.push_back(0);
            counter++;
        }
        streaks.back()++;
    }

    if(streaks.size()>counter)
        streaks.pop_back();

    tt sum = 0;
   
    for(i=0;i<counter-1;i++){
        if(sum<2*min(streaks[i],streaks[i+1]))
            sum = 2*min(streaks[i],streaks[i+1]);
    }
    
    cout<<sum;
    return 0;
}