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
    int n;cin>>n;
    int arr[n][2];
    for(int i=0;i<n;i++){
        cin>>arr[i][0]>>arr[i][1];
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        ans = 0;
        if(arr[i][0]==arr[i][1]){
            while(arr[i][0]==arr[i][1]){
                ans++;
                if(ans==3){
                    cout<<"Yes";
                    return 0;
                }
                i++;
            }
        }
    }
    
    cout<<"No";
    return 0;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    calc();
    return 0;
}