#include<bits/stdc++.h>
using namespace std;
int main(){
    /* string s;cin>>s;
    stack<char> k;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(')
            k.push(s[i]);
        else if(s[i]==')' and k.top()=='(')
            k.pop();
    }
    if(k.empty())
        cout<<0;
    else cout<<1; */

    int n;cin>>n;
    int N;cin>>N;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    for(int i =0;i<n;i++){
        int sum = arr[i];
        for(int j=0;j<n;j++){
            if(i==j) continue;
            if(sum+arr[j]==N){
                cout<<1;
                return 0;
            }
        }
    }
    cout<<0;
    return 0;
}