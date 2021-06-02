#include<bits/stdc++.h>
using namespace std;
#define fo(n) for(long long i=0;i<n;i++)
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second

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
    string s;cin>>s;
    if(s[s.length()-1]=='s'){
        cout<<s+"es";
        return 0;
    }
    else{
        cout<<s+'s';
        return 0;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    calc();
    return 0;
}