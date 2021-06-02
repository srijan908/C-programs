#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int32_t i=0;i<n;i++)
#define endl "\n"

/* int64_t fun_ceil(int64_t n,int64_t k){
    if(n%4==0){
        return n/4;
    }
    else {
        int64_t x = (n/4)+1;
        return x;
    }
} */

string ArrayChallenge(int A[], int arrLength){
    vector<int> a;
    int x = A[0];
    for(int i=1;i<arrLength;i++){
        if(A[i]>x){
            a.push_back(A[i]);
        }
    }
    if(a.size()==0){
        return "max";
    }
    else {
        string s = "";
        for(int)
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;

    int arr[t];
    for(int i=0;i<t;i++)
        cin>>arr[i];
    
    cout<<ArrayChallenge(arr,t);
    return 0;
}