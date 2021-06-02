#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int32_t i=0;i<n;i++)
#define endl "\n"

typedef int64_t tt;
 
/* tt fun_ceil(tt n,tt k){
    if(n%k==0){
        return n/k;
    }
    else {
        tt x = (n/k)+1;
        return x;
    }
} */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;

    while(t--){
        tt n;cin>>n;
        if(n==1 or n==2 or n==4){
            cout<<-1<<endl;
            continue;
        }
        tt a = n%7, b = n%5, c = n%3, counter = 1;
        if(c==0)
            cout<<n/3<<" 0 0"<<endl;
        else if(b==0)
            cout<<"0 "<<n/5<<" 0"<<endl;
        else if(a==0)
            cout<<"0 0 "<<n/7<<endl;
        else{
            while(true){
                tt t1 = 5*counter, t2 = 7*counter;
                if((n-t1)%3==0){
                    cout<<(n-t1)/3<<" "<<t1/5<<" 0"<<endl;
                    break;
                }
                if((n-t2)%3==0){
                    cout<<(n-t1)/3<<" 0 "<<t2/7<<endl;
                    break;
                }
                counter++;
            }
        }
    }
    return 0;
}