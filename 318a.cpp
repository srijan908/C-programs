#include <bits/stdc++.h>
using namespace std;

int64_t fun_ceil(int64_t n,int64_t k){
    if(n%k==0){
        return n/k;
    }
    else {
        int64_t x = (n/k)+1;
        return x;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int64_t a,b;
    cin>>a>>b;

    if(b>fun_ceil(a,2)){
        cout<<2*(b-fun_ceil(a,2));
    }
    else{
        cout<<b*2-1;
    }  
}
