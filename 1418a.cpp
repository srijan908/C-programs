#include<bits/stdc++.h>
using namespace std;

int64_t ceil_div(int64_t a, int64_t b)
{
    return (a+b-1)/b;
}

int64_t run_case(){
    int64_t x,y,k;
    cin>>x>>y>>k;
    int64_t trades = ceil_div(k*y+k-1,x-1);
    trades+=k;
    return trades;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    vector<int64_t> ans;

    while(t--){
        ans.push_back(run_case());
    }
    for(int64_t x:ans)
        cout<<x<<"\n";
}
