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
    int a,b;cin>>a>>b;
    string s;cin>>s;
    int arr[s.length()] = {0};
    bool z = false;

    if(s[0]=='1'){
        arr[0] = a;
        z = true;
    }
    int prev = 0;
    for(int i=1;i<s.length();i++){
        if(s[i]=='0'){
            prev = i;
            while(i<s.length() and s[i]=='0'){
                if(s[i]!='0')
                    break;
                arr[i] = arr[i-1];
                //cout<<"sr";
                i++;
            }
        }

        if(s[i]=='1'){
            //cout<<9;
            if(z==false){
                arr[i] = a;
                z = true;
            }
            else if(s[i-1]=='1'){
                arr[i] = arr[i-1];
            }
            else{
                //cout<<prev<<" "<<i<<" ";
                arr[i] = arr[i-1]+min((i-prev)*b,a);
            }
        }
    }
    // for(auto it:arr)
    //     cout<<it<<" ";
    cout<<arr[s.length()-1]<<endl;
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