#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, sum=0, ans=0;
    cin>>n;
    vector<int> coins(n);

    for(int i=0;i<n;i++) {
        cin >> coins[i];
        sum+=coins[i];
    }

    sort(coins.begin(),coins.end());
    int temp=sum;
    for(int j=0;j<n;j++) {
        if(sum>floor(temp/2)){
            ans++;
            sum-=coins[j];
        }
        else
            break;
    }

    cout<<ans;
    return 0;
}
