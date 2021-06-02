#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int64_t i=0;i<n;i++)


int64_t test(vector<int64_t> elem){
    sort(elem.begin(), elem.end());
    int64_t cost = 0;
    int n = elem.size();
    fo(i,n){
        cost+=abs(elem[i]-elem[n/2]);
    }
    return cost;
}

int64_t calc(int64_t n, int64_t m){
    vector<vector<int64_t>> s(n);
    for(int64_t i =0;i<n;i++){
        s[i].resize(m);
        for(int64_t j=0;j<m;j++){
            cin>>s[i][j];
        }
    }

    int64_t ans = 0;

    int up_row = 0,low_row = n-1;

    while(up_row<=low_row){
        int left_col = 0,right_col = m-1;
        while(left_col<=right_col){
            vector<int64_t> elem = {s[up_row][left_col]};
            if(up_row!=low_row) elem.push_back(s[low_row][left_col]);
            if(left_col!=right_col) elem.push_back(s[up_row][right_col]);
            if(left_col!=right_col && up_row!=low_row) elem.push_back(s[low_row][right_col]);

            ans+=test(elem);
            left_col++;
            right_col--;
        }
        up_row++;
        low_row--;
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;

    while(t--){
        int64_t n,m;cin>>n>>m;

        cout<<calc(n,m)<<"\n";
    }
    return 0;
}