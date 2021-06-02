#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int32_t i=0;i<n;i++)
#define endl "\n"

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;cin>>s;
    int i ;bool a = false;int c =0;
    fo(i,s.length()-1){
        if(s[i]==s[i+1])
            c++;
        if(c>=6){
            cout<<"YES";
            a = true;
            break;
        }
        if(s[i]!=s[i+1])
            c=0;
    }
    if(a==false)
        cout<<"NO";
    return 0;
}