#include<bits/stdc++.h>
using namespace std;

int main() {

    int n,m,ans=0,i;
    cin>>n>>m;

    vector<int> x(n);
    for(int i=0;i<n;i++)
        cin>>x[i];

    sort(x.begin(),x.end());

    for( i=0;i<n;i++)
    {
        if(x[i]>=x[n-m-1] && x[i]>0)
            break;
        if(n==m){
            if(x[i]>=x[n-m] && x[i]>0)
                break;
        }
    }
    cout<<n-i;
    return 0;
}
