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
    ll n;cin>>n;
    if(n%3==0)
        cout<<0;
    else{
        ll num1 = 0,num2 = 0;
        ll temp = n;
        bool can = false;
        int l = 0;
        while(temp>0){
            ll x = temp%10;
            if(x%3==0)
                can = true;
            if(x==2 or x==5 or x==8)
                num2++;
            if(x==1 or x==4 or x==7)
                num1++;
            temp/=10;
            l++;
        }
        if(can==false or abs(num1-num2)==l)
            cout<<-1;
        else 
            cout<<abs(num1-num2);
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    
        calc();
    
    return 0;
}