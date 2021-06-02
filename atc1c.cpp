#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int32_t i=0;i<n;i++)


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;
    int arr[m][2]={0};
    for(int i =0;i<m;i++){
        for(int j=0;j<2;j++)
            cin>>arr[i][j];
    }
    int ans = n-1-m;
    cout<<ans;
    return 0;
}