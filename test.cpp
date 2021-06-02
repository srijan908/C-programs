#include<bits/stdc++.h>
using namespace std;
#define fo(n) for(long long i=0;i<n;i++)
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second

typedef long long ll;
 
/* tt fun_ceil(tt n,tt k){
    if(n%k==0){
        return n/k;
    }
    else {
        tt x = (n/k)+1;
        return x;
    }
} */
//sort(s.begin(),s.end(),[](tt x, tt y){return abs(x)>abs(y);});
int calc(){ 
    int arr[100000] ;
    for(int i=0;i<100000;i++){
        arr[i]=i;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    clock_t start_time = clock();
    calc();
    clock_t end_time = clock();
    double t = (end_time - start_time);
    cout<<fixed<<setprecision(100)<<"Time Taken "<<t<<endl;
    return 0;
}