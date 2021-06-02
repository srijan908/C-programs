#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> x(n); int sum=0;

    for(int i=0;i<n;i++){
        cin>>x[i];
        sum+=x[i];
    }

    sort(x.begin(),x.end(),greater<int>());
    int temp =0,i;
    for(i=0;i<n;i++){
        if(temp>sum/2)
            break;
        temp=temp+x[i];
    }
    cout<<i;
}
