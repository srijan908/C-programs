#include<bits/stdc++.h>
using namespace std;
#define fo(i,k,n) for(long long i=k;i<n;i++)
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second

typedef long long ll;

 ll fun_ceil(ll n,ll k){
if(n%k==0){
    return n/k;
}
else {
    ll x = (n/k)+1;
    return x;
}
} 
//sort(s.begin(),s.end(),[](tt x, tt y){return abs(x)>abs(y);});
void calc(){
    int n,a,b;cin>>n>>a>>b;
    string s;cin>>s;
    bool arr[n];
    for(int i=0;i<n;i++)
        arr[i] = false;

    int k = 0;
    int over = 0;
    fo(i,0,n){
        if(k>=a+b)
            break;
        if(s[i]=='a'){
            arr[i] = true;
            k++;
        }
        else if(s[i]=='b'){
            over++;
            if(over<=b){
                arr[i] = true;
                k++;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==false)
            cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    
        calc();
    
    return 0;
}