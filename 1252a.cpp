#include<bits/stdc++.h>
using namespace std;
#define fo(i,k,n) for(long long i=k;i<n;i++)
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second

typedef long long ll;

/* ll fun_ceil(ll n,ll k){
if(n%k==0){
    return n/k;
}
else {
    ll x = (n/k)+1;
    return x;
}
} */
//sort(s.begin(),s.end(),[](tt x, tt y){return abs(x)>abs(y);});
char fun_char(char a,char b){
    vector<char> s = {'a','b','c'};
    if(a==b){
        for(int i=0;i<3;i++){
            if(s[i]!=a)
                return s[i];
        }
    }
    else{
        for(int i=0;i<3;i++){
            if(s[i]!=a and s[i]!=b)
                return s[i];
        }
    }
}
int calc(){
    string s;cin>>s;
    int n = s.length();
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1] and s[i]!='?'){
            cout<<-1<<endl;
            return 0;
        }
    }
    if(s[0]=='?'){
        if(n>=2 and s[1]=='a')
            s[0]='b';
        else if(n>=2 and s[1]=='b')
            s[0]='a';
        else if(n>=2 and s[1]=='c')
            s[0]='a';
        else if(n>=2 and s[1]=='?')
            s[0]='a';
        else if(n==1){
            cout<<'a'<<endl;
            return 0;
        }
    }
    for(int i=1;i<n-1;i++){
        if(s[i]=='?'){
            s[i]=fun_char(s[i-1],s[i+1]);
        }
    }
    if(s[n-1]=='?'){
        if(s[n-2]=='c')
            s[n-1]='b';
        else if(s[n-2]=='b')
            s[n-1]='a';
        else 
            s[n-1]='b';
    }
    cout<<s<<endl;
    return 0;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t;cin>>t;

    while(t--){
        calc();
    }
    return 0;
}