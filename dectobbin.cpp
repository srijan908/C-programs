#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int32_t i=0;i<n;i++)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;

    while(t--){
        int32_t n;cin>>n;
        int b[32]; 
 
        int i = 0; 
        while (n > 0) { 
            b[i] = n % 2; 
            n = n / 2; 
            i++; 
        } 
  
    
        for (int j = i - 1; j >= 0; j--) 
            cout << b[j]; 
    }
    return 0;
}