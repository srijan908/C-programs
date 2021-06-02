#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;cin>>n;

    vector<int64_t> cos(n);
    for(int i=0;i<n;i++)
        cin>>cos[i];

    sort(cos.begin(),cos.end());
    int balls = 0;
    for(int i=0;i<n-2;i+=2){
        if(cos[i]<cos[i+1]){
            swap(cos[i],cos[i+1]);
            balls++;
        }
    }
    cout<<balls<<"\n";
    for(int x:cos)
        cout<<x<<" ";

    return 0;
}