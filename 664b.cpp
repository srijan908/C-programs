#include<bits/stdc++.h>
using namespace std;

string calc(int n,int arr[][4],int m){
    for(int i=0;i<n;i++){
        if((arr[i][1]==arr[i][2]) && m%2==0)
            return "YES";
    }
    return "NO";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;
        
        int arr[n][4];
        for(int i=0;i<n;i++){
            for(int j=0;j<4;j++){
                cin>>arr[i][j];
            }
        }
        /* for(int i=0;i<n;i++){
            for(int j=0;j<4;j++){
                cout<<arr[i][j];
            }
            cout<<"\n";
        } */
        cout<<calc(n,arr,m)<<"\n";
    }
}