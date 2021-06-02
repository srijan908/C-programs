#include<bits/stdc++.h>
using namespace std;
#define fo(n) for(long long i=0;i<n;i++)
#define endl "\n"
#define pb push_back

typedef long long ll;
 
/* tt fun_ceil(tt n,tt k){
    if(n%k==0){
        return n/k;
    }
    else {
        tt x = (n/k)+1;
        return x;
    }
} */
//sort(s.begin(),s.end(),[](tt x, tt y){return abs(x)>abs(y);});
int calc(){
    int n;cin>>n;
    vector<int> s(n);int ones=0;
    for(int i=0;i<n;i++){
        cin>>s[i];
        if(s[i]==1)
            ones++;
    }
    if(ones==1)
        return 0;
    int first=0;
    for(int i=0;i<n;i++){
        if(s[i]==1){
            first=i;
            break;
        }
    }
    int moves=0;
    for(int i=first;i<n;i++){
        if(s[i]==0 and ones>0){
            moves++;
        }
        if(s[i]==1)
            ones--;
    }
    return moves;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t;cin>>t;

    while(t--){
        cout<<calc()<<endl;
    }
    return 0;
}