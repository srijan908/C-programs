#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;

    int ans[n][3];
    int p=0;

    for(int i=0;i<n;i++)
    {
        int q=0;
        for(int j=0;j<3;j++){
            cin>>ans[i][j];
            if(ans[i][j]==1)
                q++;
        }
        if(q>=2)
            p++;
    }

    cout<<p;
    return 0;
}
