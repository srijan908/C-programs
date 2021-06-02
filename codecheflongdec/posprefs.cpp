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
    int n,k;cin>>n>>k;
    vector<int> s(n+1);
    int count;
    for(int i=1;i<=n;i++)
        s[i] = i;
    
    if(n%2==0){
        for(int i=1;i<=n;i++){
            if(i%2!=0)
                s[i]*=-1;
        }
        count = n/2;
    }
    else{
        for(int i=1;i<=n;i++){
            if(i%2==0)
                s[i]*=-1;
        }
        count = fun_ceil(n,2);
    }
    if(k>count){
        int counter = n;
        int temp = k-count;
        while(temp>0){
            if(s[counter]<0){
                s[counter]*=-1;
                temp--;
            }
            counter--;
        }
    }
    else if(count>k){
        int counter = n;
        int temp = count-k;
        while(temp>0){
            if(s[counter]>0){
                s[counter]*=-1;
                temp--;
            }
            counter--;
        }
    } 

    for(int i=1;i<=n;i++){
        cout<<s[i]<<" ";
    }
    cout<<endl;
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