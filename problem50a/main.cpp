#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,m, num;
    cin>>n>>m;

    if(n%2==0 || m%2==0)
        num = (n*m)/2;
    else
        num = ((n*m)-1)/2;

    cout<<num;
    return 0;
}
