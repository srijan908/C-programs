#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int32_t i=0;i<n;i++)
#define endl "\n"
#define pb push_back

typedef int64_t tt;
 
/* tt fun_ceil(tt n,tt k){
    if(n%k==0){
        return n/k;
    }
    else {
        tt x = (n/k)+1;
        return x;
    }
} */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;

    while(t--){
        tt n;cin>>n;
        int i,m=0;
        vector<int>arr(110);
        fo(i,n){
            int temp;
            cin>>temp;
            arr[temp]++;
        }
        int first = 0;
        fo(i,101){
            if(arr[i]==0){
                first = i;
                break;
            }
            --arr[i];
        }
        int second = 0;
        fo(i,101){
            if(arr[i]==0){
                second = i;
                break;
            }
        }
        //cout<<first<<" "<<second<<endl;
        cout<<first+second<<endl;
    }
    return 0;
}