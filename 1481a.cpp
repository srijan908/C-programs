#include<bits/stdc++.h>
using namespace std;
#define fo(i,k,n) for(long long i=k;i<n;i++)
#define endl "\n"
#define pb push_back
#define vii vector<ll>
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
void calc(){
    int x=0,y=0;
    int px,py;cin>>px>>py;
    string s;cin>>s;
    int u=0,d=0,r=0,l=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='U')
            y+=1,u++;
        else if(s[i]=='D')
            y-=1,d++;
        else if(s[i]=='R')
            x+=1,r++;
        else x-=1,l++;
    }
    //cout<<x<<" "<<y;
    bool a = (px==x?true:false);
    bool b = (py==y?true:false);
    if(x==px and y==py){
        cout<<"Yes"<<endl;
        return;
    }
    else{
        //cout<<a<<" "<<b;
        if(px!=x){
            if(x>px and x-r<=px){
                a=true;
            }
            else if(x<px and x+l>=px){
                a=true;
            }
        }
        if(py!=y){
            if(y>py and y-u<=py){
                b=true;
            }
            else if(y<py and y+d>=py){
                b=true;
            }
        }
    }
    if(a and b) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
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