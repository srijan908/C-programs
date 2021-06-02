#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;

    while(t--){
        int n; cin>>n;
        vector<int64_t> arr(n); int ans =0;
        for(int i=0;i<n;i++)
            cin>>arr[i];

        int x =0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++)
            {
                x++;
                int temp1 = arr[i] & arr[j], temp2 = arr[i] ^ arr[j];
                if(temp1>=temp2){
                    ans++;
                    //cout<<arr[i]<<" "<<arr[i+1]<<"\n";
                }
            }
        }
        cout<<ans<<"\n";
    }

    return 0;
}
