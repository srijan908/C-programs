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
void calc(){
    int x;cin>>x;
    if(x<10)
        cout<<x<<endl;
    else{
        if(x>45)
            cout<<-1<<endl;
        else{
            int c = 9;
            stack<int> s;
            while(x>0){
                if(x==1){
                    s.push(1);
                    break;
                }
                if(x<10 and x<c){
                    s.push(x);
                    break;
                }
                s.push(c);
                x-=c;
                c--;
            }
            while(!s.empty()){
                int k = s.top();
                cout<<k;
                s.pop();
            }
            cout<<endl;
        }
    }
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